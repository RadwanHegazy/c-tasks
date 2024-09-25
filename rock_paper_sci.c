/*
   Rock, Paper, Scissors: 
     Develop a simple game where the user can play Rock, Paper, Scissors against the computer.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randrange (int from, int to);
int check_winner(int user, int bot);



void main (){

    printf("1: Rock\n");
    printf("2: Paper\n");
    printf("3: Scissors\n");
    
    int user_input;
    int random_input = randrange(1,3);
    printf("Choose >>> ");
    scanf("%i", &user_input);

    if (user_input < 1 || user_input > 3){
        printf("Please Insert 1 or 2 or 3\n");
        return;
    }

    int winner = check_winner(user_input, random_input);

    if (winner ==1){
        printf("User:%i Bot:%i User Wins\n", user_input, random_input);
    }

    else if (winner == 0){
        printf("User:%i Bot:%i Bot Wins\n", user_input, random_input);
    }

    else {
        printf("User:%i Bot:%i No Winner\n", user_input, random_input);
    }
  
}


// return 1 if user wins, return 0 if bot wins, return -1 if no one win
int check_winner(int user, int bot){
    switch (user)
    {
    case 1:
        if (bot == 2) {
            return 0;
        }

        else if (bot == 3){
            return 1;
        }
        else{
            return -1;
        }
        break;
    
    case 2:
        if (bot == 1) {
            return 1;
        }

        else if (bot == 3){
            return 0;
        }
        
        else{
            return -1;
        }
        break;
    
    case 3:
        if (bot == 1) {
            return 0;
        }

        else if (bot == 2){
            return 1;
        }

        else{
            return -1;
        }
        break;

    
    default:
        // printf("No One Win !\n");
        return -1;
        break;
    }
}

int randrange (int from, int to){
    int result = 0;
    srand(time(NULL));

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