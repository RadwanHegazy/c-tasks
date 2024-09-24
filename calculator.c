/*
 Calculator: 
   Create a basic calculator that can perform addition, subtraction, multiplication, and division.
*/

#include <stdio.h>

void main (){

    int n1,n2;
    char operation;

    printf("\nEnter First Number : ");
    scanf("%i", &n1);

    printf("\nEnter Secend Number : ");
    scanf("%i", &n2);

    printf("\nEnter Operation : ");
    scanf(" %c", &operation);
    
    switch (operation)
        {
            case '+':
                printf("%i + %i = %i\n", n1, n2, n1+n2);
                break;

            case '-':
                printf("%i - %i = %i\n", n1, n2, n1-n2);
                break;

            case '*':
                printf("%i * %i = %i\n", n1, n2, n1*n2);
                break;

            case '/':
                printf("%i / %i = %i\n", n1, n2, n1/n2);
                break;

                    
            
            default:
                printf("Invalid Operation !\n");
                break;
        }
    
}