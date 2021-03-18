#include <stdio.h>
int main()
{
   int p;
   int a = 1;
   int q = 10 * a + sizeof(--a) + 4 - 10 / a;
printf("%d", q);
   return 0;
}

