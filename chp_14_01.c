// Q1) Program to print the value of enum variables
  
  
#include <stdio.h>
main()
{
enum month{Jan,Feb,Mar,Apr,May,Jun}m1,m2; // declaring enum variables
m1=Mar;
printf("m1 = %d \n",m1);
printf ("Enter value for m2 ");
scanf ("%d" ,&m2);
printf("m2 %d \n",m2);
}
