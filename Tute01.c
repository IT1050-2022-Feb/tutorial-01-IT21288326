/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float sub1Mark, sub2Mark, average; //variable declaration


//get user inputs
  printf("Enter the mark for subject 01:");
  scanf("%f", &sub1Mark);

  printf("Enter the marks for subject 02:");
  scanf("%f", &sub2Mark);

//calculate
  average=(sub1Mark+sub2Mark)/2;

//output

printf("average of 2 subject is %f", average);

  
  return 0;
}

