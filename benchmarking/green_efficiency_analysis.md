# Measurement Methodology

The program was instrumented using the `clock()` function from `<time.h>`. Timing measurements were collected for the entire execution and for each major phase of the program separately. The measured phases were `build_dataset()`, `process_dataset()`, and `reduce_checksum()`. The timing values were converted to seconds using `CLOCKS_PER_SEC`.

To reduce the effect of run-to-run variation, the program was executed multiple times and the average values were used for analysis. The average recorded execution times were:

* TOTAL: 0.000784 seconds
* BUILD_DATA: 0.000394 seconds
* PROCESS: 0.000169 seconds
* REDUCE: 0.000217 seconds

The total measurement started immediately before the first phase and ended immediately after the final phase. Each phase measurement only included the execution of that specific function.

# Observed Performance Differences

The measurements show clear differences between the three phases. The `build_dataset()` phase was the most expensive operation, requiring approximately 0.000394 seconds. This represents roughly half of the total execution time.

The `reduce_checksum()` phase required approximately 0.000217 seconds, making it the second most expensive phase. Although it only performs a reduction operation over the dataset, it still processes every element and performs arithmetic operations on each iteration.

The `process_dataset()` phase was the fastest, taking approximately 0.000169 seconds. While it also iterates through the entire dataset, the measured execution time was lower than the other phases.

These results indicate that not all loops over the same dataset have the same cost. The amount and type of work performed during each iteration significantly influence execution time.

# Relation Between Runtime and Energy Consumption

For a fixed hardware platform and operating conditions, longer execution times generally imply greater energy consumption because the processor remains active for a longer period.

Based on the recorded measurements, `build_dataset()` is expected to consume the largest share of the program's energy because it accounts for the largest portion of runtime. Similarly, `reduce_checksum()` is likely responsible for more energy usage than `process_dataset()` because its execution time is higher.

Although energy consumption was not measured directly, runtime provides a useful proxy when comparing phases of the same program running on the same machine. Therefore, reducing the execution time of the most expensive phase would likely provide the greatest energy savings.

# Limitations of the Experiment

A key limitation is that the experiment measured execution time rather than actual electrical energy consumption. Therefore, conclusions about energy usage are indirect.

Another limitation is the extremely short runtime of the program. Small differences in operating system scheduling, background processes, cache behavior, and timer resolution can influence the measured values.

In addition, all measurements were collected using a single dataset size and a single hardware configuration. The results may differ on another machine or with a larger workload.

# Practical Engineering Takeaway

The measurements demonstrate the value of profiling before optimization. Rather than assuming where time is spent, the collected data identifies the most expensive phase directly.

In this experiment, `build_dataset()` consumed the largest portion of total runtime at approximately 0.000394 seconds. As a result, optimization efforts should focus on this phase first because improvements there would have the greatest impact on overall execution time.

The broader engineering lesson is that performance and energy efficiency decisions should be based on measurements. Instrumentation provides objective evidence that helps developers prioritize optimization work where it will produce the largest benefit.
