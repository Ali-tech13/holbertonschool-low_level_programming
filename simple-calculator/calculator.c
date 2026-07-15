#include <stdio.h>
#include <stdbool.h>

/**
* main - see code
*
*
*
* return: always 0
* 
**/

int main(){
    
    
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    int choice;
    bool isRunning = true;
    while(isRunning){
        printf("Simple Calculator");
        printf("1) Add");
        printf("2) Subtract");
        printf("3) Multiply");
        printf("4) Divide");
        printf("0) Quit");
        printf("Choice: ");
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("Bye!");
            isRunning = false;
        }
        else if ( choice > 4)
        {
            printf("Invalid choice");
        }

        switch(choice){
            case 1:
            printf("A: ");
            scanf("%d", &num1);
            printf("B: ");
            scanf("%d", &num2);
            result = num1 + num2; 
            printf("%d + %d = %d", num1, num2, result);
                break;
            case 2:
                printf("A: ");
                scanf("%d", &num1);
                printf("B: ");
                scanf("%d", &num2);
                result = num1 - num2;
                printf("%d - %d = %d", num1, num2, result);
                break;
            case 3:
                printf("A: ");
                scanf("%d", &num1);
                printf("B: ");
                scanf("%d", &num2);
                result = num1 * num2;
                break;
            case 4:
                printf("A: ");
                scanf("%d", &num1);
                printf("B: ");
                scanf("%d", &num2);
                if (num2 == 0)
                {
                    printf("Error: division by zero");
                }
                result = num1 / num2;
                break;


        }


    }

    
    
    return 0;
}
