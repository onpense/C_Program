#include"flight.h"
//view ranked by stime,form early to late
void rank_by_ctime(pnode h)
{
	pnode p,a;
	int i,len=0;
	for(p=h;p->next!=NULL;p=p->next)
		len++;
	for(i=0;i<len-1;i++)
	{
		p=h->next;
		while(p->next!=NULL)
		{	
			if(flightnode_compare(p,p->next)==1)
			{
				a=p->next;
				p->next=a->next;
				a->next=h->next;
				h->next=a;
			}
			else
			{
				p=p->next;
			}
		}
	}
}
int flightnode_compare(pnode a,pnode b)
{
	int ah,bh,am,bm;
	ah=a->info_f.stime.hour;
	bh=b->info_f.stime.hour;
	am=a->info_f.stime.min;
	bm=b->info_f.stime.min;
	if(ah>bh)
		return 1;
	else if(ah==bh&&am>bm)
		return 1;
	else
		return 0;
}
