//Q4)Program to understand automatic variables 

#include<stdio.h>
main ( )
{
int x=3;
printf("%d\t",x) ; // print 3 as an output
{
int x=10;
printf("%d\t",x); // print 10
}
{
int x=26;
printf("%d\t" ,x);  // print 26
}
printf("%d\n",x);   // again print 3
}
     
