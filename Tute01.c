/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include <stdio.h>

//function main begins program excution
int main()
{ 
  //veriable declaring
  int submark1,submark2;
  float avarage;
   printf("subject mark 1:");//enter mark 1
   scanf("%d",&submark1);//read mark 1

   printf("subject mark 2:");//enter mark 2
   scanf("%d",&submark2);//read mark 2

   average=(submark1+submark2)/2;//calculate avarage
   printf("Avarage is %.2f",avarage);//display avarage
  
  return 0;
}//end of function main

