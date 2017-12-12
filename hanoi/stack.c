#include <stdlib.h>
#include <string.h>
#include <stack.h>

stack_t *stack_create(int size)
{
	stack_t *thiz = malloc(sizeof(stack_t));
	if (NULL == thiz)
		goto err0;

	thiz->top = NULL;
	thiz->size = size;

	return thiz;
err0:
	return NULL;
}

int is_empty(stack_t *thiz)
{
	if (NULL == thiz->top)
		return 1;
	return 0;
}

int push(stack_t *thiz, void *data)
{
	struct node_t *newn = malloc(sizeof(struct node_t));
	if (NULL == newn)
		goto err0;
	newn->data = malloc(thiz->size);
	if (NULL == newn->data)
		goto err1;

	memcpy(newn->data, data, thiz->size);

	newn->next = thiz->top;
	thiz->top = newn;

	return 0;
err1:
	free(newn);
err0:
	return -1;
}

int pop(stack_t *thiz, void *data)
{
	struct node_t *save;

	if (is_empty(thiz))
		return -1;

	save = thiz->top->next;

	memcpy(data, thiz->top->data, thiz->size);
	free(thiz->top->data);
	free(thiz->top);

	thiz->top = save;

	return 0;
}

int top(stack_t *thiz, void *data)
{
	if (is_empty(thiz))
		return -1;
	memcpy(data, thiz->top->data, thiz->size);

	return 0;
}

void stack_destroy(stack_t *thiz)
{
	struct node_t *save;

	while (NULL != thiz->top)
	{
		save = thiz->top->next;

		free(thiz->top->data);
		free(thiz->top);

		thiz->top = save;
	}

	free(thiz);
}
