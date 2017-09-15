#include "seqstack.h"

//��ʼ��
 void seqstack_init(seq_pstack *S)
 {
    *S=(seq_pstack)malloc(sizeof(seq_stack));//Ϊ�ڵ�s�洢�ռ䣬���ж��Ƿ�����ɹ�
    if(*S==NULL)
    {
        perror("malloc failed!\n");
        exit(1);
    }
    (*S)->top=-1;
 }
 //��ջ
 bool seqstack_add(seq_pstack p,int data)
 {
    if(is_full_seqstack(p))
    {
        printf("��ջ��������������ʧ��");
        return false;
    }
    p->top++;
    p->data[p->top]=data;
    return true;
 }
 //��ջ
 bool seqstack_push(seq_pstack l,int *p)
 {
    if(is_empty_seqstack(l))
    {
        printf("��ջ�ѿգ���ջʧ��");
        return false;
    }
    *p=l->data[l->top];
    l->top--;
    return true;
 }
 //�ж�ջ�Ƿ�Ϊ��
 bool is_empty_seqstack(seq_pstack p)
 {
    if(p->top<0)
        return true;
    else
        return false;
 }
 //�ж�ջ�Ƿ���
 bool is_full_seqstack(seq_pstack p)
 {
    if(p->top==SIZE-1)
        return true;
    else
        return false;
 }
 //����
 void seqstack_show(seq_pstack p)
 {
    int i;
    for(i=p->top;i>=0;i--)
    {
        printf("%d",p->data[i]);
    }
    printf("\n");
 }
