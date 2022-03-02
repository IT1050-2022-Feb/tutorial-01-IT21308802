/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

int marks1, marks2, total=0 ;
float average ;

  printf("Enter marks for the Subject 1 : ");
  scanf("%d",&marks1);

  printf("Enter marks for the Subject 2 : ");
  scanf("%d",&marks2);

  total =marks1+marks2;
  average=total/2;

  printf("Average mark is %.2f",average);
  
  return 0;
}

