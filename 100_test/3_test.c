/* 输入一个十进制整数，然后输出他所对应的八进制，十六进制数 */
#include<stdio.h>
int main(void)
{
	int num;
	printf("请输入一个十进制数");
	scanf("%d",&num);
	printf("该数转换为十六进制数为：%x\n",num);
	printf("该数转换为八进制数为：%o\n",num);
	return 0;
}