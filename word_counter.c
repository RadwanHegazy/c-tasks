/*
    Word Counter : 
       - Write a program that counts the number of words in a given string
*/


#include <stdio.h>
#include <stdbool.h>

void main (){

    char word[225];
    printf("enter the word : ");
    scanf("%s",&word);
    
    int idx = 0;

    while (1)
    {
        if (word[idx+1] == NULL){
            break;
        }else{
            idx = idx + 1;
        }

    }
    
    printf("\nThe length of word '%s' is %i\n", word, idx + 1);

}
