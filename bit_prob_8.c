//Q8)

#include <stdio.h>

main()
{
int num='OxAO1D', pos=3, bit;
int mask=1<<pos;   // left shift the pos by 1
bit= (num&mask) >>pos; 
printf("%d",bit);
}
