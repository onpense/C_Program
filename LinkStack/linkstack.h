#ifndef _LINKSTACK_H_
#define _LINKSTACK_H_
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct linkstack{
    int data;
    struct linkstack* next;
}link_stack,*link_pstack;

extern void linkstack_init(link_pstack *Top);
extern void linkstack_pop(link_pstack *top,int data);
extern bool linkstack_push(link_pstack *top,int *d);
extern bool is_empty_linkstack(link_pstack top);
extern void linkstack_show(link_pstack top);



#endif // _LINKSTACK_H_
