#include "linkstack.h"

int main()
{
    link_pstack t;
    int num ,i,k;
    linkstack_init(&t);
    while(1)
    {
        printf("please input a number:\n");
        scanf("%d",&num);
        i=num;
        if(num<0)
            num=-num;
        if(i>0)
            printf("0");
        else
            printf("-0");
        while(num)
        {
            linkstack_pop(&t,num%8);
            num/=8;
        }
        while(!is_empty_linkstack(t))
        {
            linkstack_push(&t,&k);
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}
