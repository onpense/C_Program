#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[20];
    a[0]=1;
    a[1]=1;
    for(i=2;i<20;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<20;i++)
    {
         printf("%d ",a[i]);
        if((i+1)%5==0)
            printf("\n");
    }
    printf("结束\n");
    return 0;
}
