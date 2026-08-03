# Memory Maps Analysis

## stack_example.c

This program shows how recursion creates separate stack frames. The calls happen in this order: `walk_stack(0)`, `walk_stack(1)`, `walk_stack(2)`, and `walk_stack(3)`. Each call has its own copies of `depth`, `max_depth`, and `marker`.

At the deepest point, the stack contains:

```text
walk_stack depth 3 -> marker = 30
walk_stack depth 2 -> marker = 20
walk_stack depth 1 -> marker = 10
walk_stack depth 0 -> marker = 0
main

At depth 3, the condition depth < max_depth is false, so no new recursive call is made. The function executes the code after the if, then the calls return in reverse order: 3 -> 2 -> 1 -> 0.

Each call to dump_frame creates a new stack frame containing local_int, local_buf, and p_local. The pointer p_local stores the address of local_int in the same stack frame. For example, at depth 2, local_int is 102 and local_buf contains "C".

When dump_frame returns, the lifetime of local_int, local_buf, and p_local ends. The stack space may later be reused. The "enter" and "exit" calls are separate calls, so even if they print the same addresses, they contain different local objects with different lifetimes.

This program does not allocate any heap memory.

aliasing_example.c

The program starts with a = NULL, b = NULL, and n = 5. The function make_numbers(5) creates a stack frame containing n, i, and arr.

It then uses malloc to allocate an array of five integers on the heap. After the loop, the heap array contains:

[0, 11, 22, 33, 44]

The function returns the heap address to main. The stack frame of make_numbers ends, so its local variables no longer exist. However, the heap allocation remains alive because it has not been freed.

After a = make_numbers(n), the memory state is:

Stack:
a -> heap array
b = NULL
n = 5

Heap:
[0, 11, 22, 33, 44]

After b = a, both pointers store the same heap address

This is pointer aliasing. b does not point to the pointer variable a. Both a and b point to the same heap allocation. Therefore, a[2] and b[2] both access the same value, which is 22.

After free(a), the heap array is deallocated and its lifetime ends. The pointer variables still contain the old address

Reading b[2] is a use-after-free read because it reads from memory after the array was freed. Writing b[3] = 1234 is a use-after-free write because it writes to memory after the array was freed. Both operations cause undefined behavior.

The allocation must only be freed once. Calling free(b) after free(a) would be a double free because both pointers referred to the same allocation.

AI Explanation Review

An incorrect AI explanation may say that after free(a), only a becomes invalid while b still points to the array. This is wrong because a and b point to one shared heap allocation. When free(a) is called, the lifetime of that allocation ends, so both pointers become dangling.

Another misleading explanation may say that the "enter" and "exit" calls in stack_example.c use the same local variables because the addresses may be equal. This is also incorrect. Each call to dump_frame creates new local objects. A later call may reuse the same stack addresses, but the earlier objects have already reached the end of their lifetimes.
