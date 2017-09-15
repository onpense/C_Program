#ifndef _SEQSTACK_H_
#define _SEQSTACK_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 20
typedef struct SeqStack{
    int data[SIZE];
    int top;
}seq_stack,*seq_pstack;

extern void seqstack_init(seq_pstack *S);
extern bool seqstack_add(seq_pstack p,int data);
extern bool seqstack_push(seq_pstack p,int *t);
extern bool is_empty_seqstack(seq_pstack p);
extern bool is_full_seqstack(seq_pstack p);
extern void seqstack_show(seq_pstack p);



#endif // _SEQSTACK_H_
