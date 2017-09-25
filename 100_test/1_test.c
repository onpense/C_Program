/*
产生10个1到100的随机数
srand()提供一个种子，其是一个unsigned int类型，取值范围为0~65535
rand()会根据srand()提供的种子返回一个随机数（0~32767）之间

三个通用的随机数发生器，推荐用第三个
1.rand()
2.random()
3.randomize()
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i;
	srand((int)time(0));  //产生一个种子
	//产生1-100随机数
	printf("10个85-100的随机数\n");
	for(i=0;i<10;i++){
		printf("%d ",(int)rand()%(100-85)+85);   //产生十个随机数
	}
	//产生0-1的随机数
	printf("\n10个0-1的随机数\n");
	for(i=0;i<10;i++){
		printf("%.2f ",1/(float)(rand()%20+1));
	}
	
	/* //利用random,打印一个随机数，在0-99之间
	printf("\n利用random打印10个100内的随机数\n");
	randomize();
	for(i=0;i<10;i++){
		printf("%ld",random(100));
	} */
	printf("\n");
	return 0;
}
