//Q12)

#include <stdio.h>

main()
{
int i,num=0x1A3B;
unsigned int mask;
mask=1<<15;  // left shift 15 by 1
for(i=15;i>=0;i--)
{
    (num&mask) ? printf("l") :printf("O");
    mask=mask>>1;
}
}
