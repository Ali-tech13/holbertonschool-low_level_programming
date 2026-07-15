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
    int total = 0;
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
        printf("Enter num1");
        scanf("%d", &num1);
        printf("Enter num2");
        scanf("%d", &num2);

        switch(choice){
            case '+':
                printf("%d + %d = %d", num1, num2, total);
                break;
            case '-':
                printf("%d - %d = %d", num1, num2, total);


        }


    }

    
    
    return 0;
}
