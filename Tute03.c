/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  //declair variables
  int n, count=1, sum=0;

  //get user inputs
  printf("Number for N:");
  scanf("%d", &n);
  
  //calculation
while (count<=n)
{
  sum=sum+count;
  count++;
}
//output
printf("sum of the numbers 1 to %d is %d", n, sum);

 return 0;
}

