 #include "linkstack.h"
 //initialize
 void linkstack_init(link_pstack *Top)
 {

     (*Top)=NULL;

 }
 //get into the stack
 void linkstack_pop(link_pstack *top,int data)
 {
     link_pstack new;
     new=(link_pstack)malloc(sizeof(link_stack));
     if(new==NULL)
     {
         printf("malloc failed");
         exit(1);
     }
     new->data=data;
     new->next=*top;
     *top=new;



 }
// get out of the stack
 bool linkstack_push(link_pstack *top,int *d)
 {
     link_pstack t;
     if(is_empty_linkstack(*top))
     {
         printf("the stack is empty");
         return false;
     }
     t=*top;
     *d=t->data;
     *top=(*top)->next;
     free(t);
     return true;
 }
 //judge if the stack is empty
 bool is_empty_linkstack(link_pstack top)
 {
    if(top==NULL)
        return true;
    else
        return false;
 }
 //ergodic
 void linkstack_show(link_pstack top)
 {
    link_pstack t;
    for(t=top;t!=NULL;t=t->next)
        printf("%d",t->data);
 }
