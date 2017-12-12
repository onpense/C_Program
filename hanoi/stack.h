#ifndef _LIST_STACK_H_
#define _LIST_STACK_H_

struct node_t {
	void *data;
	struct node_t *next;
};

typedef struct {
	struct node_t *top;
	int size;
} stack_t;

stack_t *stack_create(int size);
int is_empty(stack_t *thiz);
int push(stack_t *thiz, void *data);
int pop(stack_t *thiz, void *data);
int top(stack_t *thiz, void *data);
void stack_destroy(stack_t *thiz);

#endif /* _LIST_STACK_H_ */
