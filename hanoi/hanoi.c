#include <stdio.h>
#include <stack.h>

void hanoi(char from, char pass, char to, int n)
{
start:
	if (n == 1)
	{
		printf("%c ==> %c\n", from, to);	
	}
	else
	{
	POINT1:
		hanoi(from, to, pass, n - 1);	
	POINT2:
		hanoi(from, pass, to, 1);
	POINT3:
		hanoi(pass, from, to, n - 1);
	}
}

typedef enum {
	POINT1,
	POINT2,
	POINT3,
} call_point;

struct data_t {
	char from;
	char pass;
	char to;
	int  n;
	call_point point;
};

void set_para(struct data_t *para, char from, char pass, char to, int n, int point)
{
	para->from = from,
	para->pass = pass,
	para->to   = to,
	para->n    = n;
	para->point = point;
}

void _hanoi(char from, char pass, char to, int n)
{
	stack_t *s = stack_create(sizeof(struct data_t));

	struct data_t para;
	struct data_t data;

	char tmp;

start:
	if (n == 1)
	{
		printf("%c ==> %c\n", from, to);
	}
	else
	{
		// 保存当前函数栈帧数据
		set_para(&data, from, pass, to, n, POINT1);
		push(s, &data);
		// 传递参数
		// from = from,
		tmp = pass,  pass = to, to = tmp, n = n - 1;
		goto start;

point1:
		set_para(&data, from, pass, to, n, POINT2);
		push(s, &data);

		// from = from, pass = pass, to = to, n = 1;
		n = 1;
		goto start;

point2:
		set_para(&data, from, pass, to, n, POINT3);
		push(s, &data);

		// from = pass, pass = from, to = to, n = n - 1;
		// to = to;
		tmp = from, from = pass, pass = tmp, n = n - 1;
		goto start;
point3:
		;
	}

	if (is_empty(s))
		goto exit;
	pop(s, &data);
	from = data.from, pass = data.pass, to = data.to;
	n = data.n;
	switch (data.point)
	{
		case POINT1:
			goto point1;
		case POINT2:
			goto point2;
		case POINT3:
			goto point3;
	}

exit:

	stack_destroy(s);
}

int main(void)
{
	int n;

	printf("pls input n: ");
	scanf("%d", &n);

	_hanoi('A', 'B', 'C', n);

	return 0;
}
