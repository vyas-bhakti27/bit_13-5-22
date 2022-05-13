// P14. 2 Program to understand automatic variables 
  

#include<stdio.h>
main( )
{
func ( ) ;
func ( ) ;
func ( ) ;
}
func ( ) // calling function
{
int x=2,y=5;
printf("x=%d,y=%d",x,y) ;
x++; y++;
}
