#include<stdio.h>
#define N 100
int main(void)
{
	int a[N]={0};
	int num=0,i=0;
	printf("please input a num:\n",num);
	scanf("%d",&num);
	while(num>=2)
	{
		a[i++]=num%2;
		num/=2;
	}
	a[i]=num;
	for(;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
	
}
