/*
   Prime Number Checker:
    Write a program that checks if a number entered by the user is prime.
*/

#include <stdio.h>
#include <math.h>

int is_prime (int num){
	if (num <= 1) {return 0;}
	if (num == 2) {return 1;}
	if (num %2 ==0){return 0;}

	for (int i;i<=sqrt(num);i+=2){
		if (num % i == 0){
			return 0;
		}
	}

	return 1;
}

void main (){

	int number;
	printf("Enter The Number : ");
	scanf("%i", &number);

	if (is_prime(number) == 1){
		printf("\n%i is prime \n", number);
	}

	else{
		printf("\n%i not prime\n", number);
	}


}
