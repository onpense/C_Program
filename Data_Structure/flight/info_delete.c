#include"flight.h"
void flightnode_delete(pnode h)
{
	pnode p,t;
	char num[10];
	printf("请输入你要删除的航班号：\n");
	scanf("%s",num);
	for(p=h->next;p!=NULL;p=p->next)
	{
		if(strcmp(p->info_f.number,num)==0)
		{
			printf("你将要删除该列航班！\n");
			showoneflight(p);
			break;
		}
	}
	t=h;
	while(t->next!=p)
		t=t->next;
	t->next=p->next;
	free(p);
}
