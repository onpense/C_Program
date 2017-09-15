#include "seqstack.h"

//初始化
 void seqstack_init(seq_pstack *S)
 {
    *S=(seq_pstack)malloc(sizeof(seq_stack));//为节点s存储空间，并判断是否申请成功
    if(*S==NULL)
    {
        perror("malloc failed!\n");
        exit(1);
    }
    (*S)->top=-1;
 }
 //入栈
 bool seqstack_add(seq_pstack p,int data)
 {
    if(is_full_seqstack(p))
    {
        printf("该栈已满，插入数据失败");
        return false;
    }
    p->top++;
    p->data[p->top]=data;
    return true;
 }
 //出栈
 bool seqstack_push(seq_pstack l,int *p)
 {
    if(is_empty_seqstack(l))
    {
        printf("该栈已空，出栈失败");
        return false;
    }
    *p=l->data[l->top];
    l->top--;
    return true;
 }
 //判断栈是否为空
 bool is_empty_seqstack(seq_pstack p)
 {
    if(p->top<0)
        return true;
    else
        return false;
 }
 //判断栈是否满
 bool is_full_seqstack(seq_pstack p)
 {
    if(p->top==SIZE-1)
        return true;
    else
        return false;
 }
 //遍历
 void seqstack_show(seq_pstack p)
 {
    int i;
    for(i=p->top;i>=0;i--)
    {
        printf("%d",p->data[i]);
    }
    printf("\n");
 }
