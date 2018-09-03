#include <stdio.h>
int main()
{
    int i;
    for(i=100; i<=200;i++)
    {
         printf("%3d ", i);
         if(i%10==0)
         printf("\n");
    }
}
