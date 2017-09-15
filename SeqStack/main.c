#include "seqstack.h"

int main()
{
    int num,out,tmp;
    seq_pstack s;
    seqstack_init(&s);
    while(1)
    {
        printf("请输入一个十进制数：\n");
        scanf("%d",&num);
        tmp=num;
        if(num<0)
            num=-num;
        if(tmp>0)
            printf("0");//八进制表示方法，在数值前面加0
        else
            printf("-0");
        while(num)
        {
            seqstack_add(s,num%8);
            num/=8;
        }
        while(!is_empty_seqstack(s))
        {
            seqstack_push(s,&out);
            printf("%d",out);
        }
        printf("\n");
    }
    return 0;
}
