/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2;

  printf("Enter marks for subject 1- ");
  scanf("%d", &m1);
  printf("Enter marks for subject 2- ");
  scanf("%d", &m2);

  printf("Average is %.2f",(m1+m2)/2.0);
  
  return 0;
}

