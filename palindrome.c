/*
   Palindrome Checker: 
     Build a program that checks if a given string is a palindrome (reads the same forwards and backwards).

*/

#include <stdio.h>
#include <string.h>



void main (){
    char word[10];
    printf("Enter the word : ");
    scanf("%s", &word);
    
    int word_len = strlen(word);
    char plaindrome_word[10] = "";
    int i = 0;

    // make plindrome word
    while (word_len != 0)
    {
        plaindrome_word[i] = word[word_len-1];
        word_len--;
        i++;
    }


    // compare plindrome vs original text
    if (strcmp(word, plaindrome_word) == 0){
        printf("%s = %s\n", word, plaindrome_word);
    }else{
        printf("%s != %s\n", word, plaindrome_word);
    }
    

}

