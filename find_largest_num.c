/*
  Find the Largest Element in an Array
    Write a program that takes a set of numbers from the user and finds the largest number in the array.

*/


#include <stdio.h>

void main (){
    int SIZE = 10;
    int nums[10] = {0,9,2,100,-1,101,200,32,14,12};
    int largets_num = 0;
    int idx = 0;
    while (idx < SIZE)
    {
        if (nums[idx] > largets_num){
            largets_num = nums[idx];
        }
        idx++;
    }

    printf("Largest Number is : %i\n", largets_num);

}