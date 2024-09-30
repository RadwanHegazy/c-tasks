/*
  Char counter
    count the need character in the word
*/

#include <stdio.h>
#include <string.h>

void main (){
    char word[] = "radwangaber";
    char ch[] = "a";
    int counter = 0;

    for (int i = 0; i < strlen(word); i++)
    {   
        if (word[i] == ch[0]) {
            counter++;
        }
    }
    
    printf("'%c' in '%s' %i times\n",ch[0], word, counter);
}