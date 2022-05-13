// Q10)

#include <stdio.h>

main()
{
int num='Ox1F', pos=3, bit;
bit=(num>>pos)&1; // right shift num by pos ,than & operation with 1
printf("%d\n",bit) ;
  
}
