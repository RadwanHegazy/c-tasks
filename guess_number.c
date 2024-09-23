/*
    Guess the Number: 
      Write a program that generates a random number and asks the user to guess it, providing hints if the guess is too high or too low.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randrange (int from, int to);


void main (){
    srand(time(NULL));
    int generated_number = randrange(1,100);
    int user_input = 0;
    
    while (1)
    {
        printf("Enter Number between 1:100 --> ");
        scanf("%i", &user_input);
        
        if (user_input == generated_number) {
            printf("\nYes you did it, the generated number is %i\n",generated_number);
            break;
        }

        else if (user_input > generated_number){
            printf("\nGenerated number is Low !\n");      
        }

        else if (user_input < generated_number) {
            printf("\nGenerated number is Hight !\n");      
        }
    


    }
    


}


int randrange (int from, int to){
    int result = 0;

    /* 
        Make sure that :
            from : bigger number
            to : smaller number
    */
    if (from > to){
        to, from = from, to;
    }

    else if (from == to){
        to = to + 1;
    }


    result = (rand() % (to - from)) + from;

    return result;
}