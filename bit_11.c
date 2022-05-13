// Q11)

#include <stdio.h>

main()
{
int i, num='OxAODF';
for(i=15;i>=0;i--)
printf ("%d", (num>>i) &1); // right shift the num by i then & operation with 1
}
