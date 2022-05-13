// Q9)

#include <stdio.h>

main()
{
int i,bit,num='Ox238E';
unsigned int mask;
for (i=15; i>=0; i--)
{
    mask=1<<i; // left shift the i by 1
    bit=(num&mask>>i);// num AND operation with mask ,then right shift by i
printf("%d",bit) ;
}
}
