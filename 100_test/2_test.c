/* 
求 x^2 +y^2=1989的所有整数解
 */
 #include<stdio.h>
 #include<math.h>
 #define VALUE  1989
 int main(void)
 {
	 int x,y,sqr,count=1;
	 sqr=sqrt(VALUE);    //求VALUE的平均值
	 for(x=0;x<sqr;x++){
		 for(y=0;y<VALUE-x*x;y++){
			 if(x*x+y*y==VALUE){
				 printf("第%d组解 x=%d,y=%d\n",count++,x,y);
			 }
		 }
	 }
	 
 }