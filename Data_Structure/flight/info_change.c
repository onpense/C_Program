#include"flight.h"

void flightnode_change(pnode h)
{
	int i;
	pnode p;
	char num[10];
	printf("您想更改哪行航班？\n");
	printf("航班号：");
	scanf("%s",num);
	for(p=h->next;p!=NULL;p=p->next)
	{
		if(strcmp(p->info_f.number,num)==0)
		{	showoneflight(p);
			break;
		}
	}
	printf("您想更改航班的哪项信息？\n");
	printf("1.航班号\n2.起始地址\n3.终止地址\n4.价格\n5.起始时间\n6.到达时间\n");
	printf("选项：");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("航班号:");
			   scanf("%s",num);
			   strcpy(p->info_f.number,num);
			   break;
		case 2:printf("起始地址:");
			   scanf("%s",num);
			   strcpy(p->info_f.startaddr,num);
			   break;
		case 3:printf("终止地址:");
			   scanf("%s",num);
			   strcpy(p->info_f.endaddr,num);
			   break;
		case 4:printf("价格");
			   scanf("%d",&p->info_f.price);
			   break;
		case 5:printf("起始时间:");
			   scanf("%d:%d",&p->info_f.stime.hour,&p->info_f.stime.min);
			   break;
		case 6:printf("到达时间");
			   scanf("%d:%d",&p->info_f.atime.hour,&p->info_f.atime.min);
			   break;
		default:printf("input number error\n");
				break;
	}

}
