/*
String Length Calculation
    Write a function to calculate the length of a string without using the built-in strlen function.
*/

#include <stdio.h>
int len(char word[225]);

void main (){
	char word[225];
	printf("Enter word : ");
	scanf("%s", &word);
	printf("\nlen is : %i \n", len(word));
}


int len (char word[225]){
	int len_counter = 0;
	while (1) {
		if (word[len_counter] == NULL){
			break;
		}

		len_counter++;
	}
	return len_counter;
}
