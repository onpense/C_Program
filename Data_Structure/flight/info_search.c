#include"flight.h"
void search_bynum(pnode h)
{
	pnode p;
	char num[10];
	printf("请输入航班号:\n");
	scanf("%s",num);
	for(p=h->next;p!=NULL;p=p->next)
	{
		if(strcmp(p->info_f.number,num)==0)
		{	showoneflight(p);
			break;
		}
	}
}
void showoneflight(pnode p)
{
	printf("%s\t%s\t%s\t%d\t%d:%d\t%d:%d\n",p->info_f.number,p->info_f.startaddr,p->info_f.endaddr,p->info_f.price,p->info_f.stime.hour,p->info_f.stime.min,p->info_f.atime.hour,p->info_f.atime.min);
}
