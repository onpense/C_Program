/* 输入一个正整数，求出其所有的质数因子 */
#include<stdio.h>
int main(void){
	int num,tmp;
	int i,j;
	printf("请输入一个正整数：\n");
	scanf("%d",&num);
	//被因子除，当商为1时退出循环
	while(num!=1){
		for(j=2;j<=num;j++){
			if(num%j==0){
				printf("%d ",j);
				num/=j;   //商作为新的数，继续求因子
				break;
			}
		}
	}
	printf("\n");
	return 0;
}
//利用递归的方式求因子
int  ask_first_prime(int n)
{
	int i;
	for(i=1;i<n;i++){
		if(n%i==0){
			printf("%d ",i);
			return i;		
		}
	}
}