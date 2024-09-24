/*
    Temperature Converter: 
       Build a program that converts temperatures between Celsius and Fahrenheit.
*/

#include <stdio.h>

void main (){
    int cels_temp;

    printf("Enter Tempreture in celsius : ");
    scanf("%i", &cels_temp);

    float result = (cels_temp*9/5) + 32;
    printf("\nTempreture in fahrenheit is : %.1f\n F", result);

}
