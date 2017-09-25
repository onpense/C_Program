/* 
完数：一个数如果等于可以被他整除的因子之和，则为完数。（6是一个完数，因子：1,2,3    6=1+2+3）
找出1000以内的所有完数。
 */
 #include<stdio.h>
 #define Value 1000
 int main(void)
 {
	int i,j,sum,count=1;
	for(i=2;i<Value;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0)
				sum+=j;
		}
		if(i==sum)
			printf("第%d个完数: %d\n",count++,i);
	} 
	return 0; 
 }