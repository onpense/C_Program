#include"flight.h"
//for inputting  the flight information
void flightnode_init(pnode *N)
{
	(*N)=(pnode)malloc(sizeof(node));
	if((*N)==NULL)
	{
		perror("malloc node failed\n");
		exit(1);
	}
	(*N)->next=NULL;
}
void flightnode_insert(pnode p,pnode new)
{
	new->next=p->next;
	p->next=new;
}
void flightnode_create(pnode p)
{
	pnode new=(pnode)malloc(sizeof(node));
	printf("请输入航班信息：\n");
	scanf("%s%s%s%d%d:%d%d:%d",new->info_f.number,new->info_f.startaddr,new->info_f.endaddr,&new->info_f.price,&(new->info_f.stime.hour),&(new->info_f.stime.min),&(new->info_f.atime.hour),&(new->info_f.atime.min));
	new->next=p->next;
	p->next=new;
}
void flightnode_show(pnode h)
{
	pnode p;
	for(p=h->next;p!=NULL;p=p->next)
		printf("%s\t%s\t%s\t%d\t%d:%d\t%d:%d\n",p->info_f.number,p->info_f.startaddr,p->info_f.endaddr,p->info_f.price,p->info_f.stime.hour,p->info_f.stime.min,p->info_f.atime.hour,p->info_f.atime.min);
	printf("\n");
}
void flight_input(pnode h)
{
	pnode p=h;
	char ch;
	flightnode_create(p);
	p=p->next;
	while(1)
	{
		printf("是否继续输入：y/n:");
		while(getchar()!='\n');
		scanf("%c",&ch);
		if(ch=='y')
		{
			flightnode_create(p);
			p=p->next;
		}
		if(ch=='n')
			break;
	}
}
