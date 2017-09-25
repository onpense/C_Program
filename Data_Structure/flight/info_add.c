#include"flight.h"
void flightnode_add(pnode h)
{
	pnode p=h;
	int i,n;
	printf("您想增加几次航班？\n");
	scanf("%d",&n);
	while(p->next!=NULL)
		p=p->next;
	for(i=0;i<n;i++)
	{
		flightnode_create(p);
		p=p->next;
	}
}
