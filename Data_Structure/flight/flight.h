#ifndef _FLIGHT_H_
#define _FLIGHT_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>
#include<string.h>
typedef struct flighttime{
	int hour;
	int min;
}time;
typedef struct flightinfo{
	char number[10];
	char startaddr[10];
	char endaddr[10];
	int price;
	time stime;
	time atime;
}flight,*pflight;
typedef struct flightnode{
	flight info_f;
	struct flightnode * next;
}node,*pnode;
//input flight information
extern void flightnode_init(pnode *N);
extern void flightnode_insert(pnode p,pnode new);
extern void flightnode_create(pnode p);
extern void flight_input(pnode p);
extern void flightnode_show(pnode p);
//view flight information ranked by stime
extern void rank_by_ctime(pnode p);
extern int flightnode_compare(pnode a,pnode b);//compare two flight start time
extern void flightnode_del(pnode h,pnode p);
//search flight through key info
extern void search_bynum(pnode p);
extern void showoneflight(pnode p);
//add flight infomation
extern void flightnode_add(pnode p);
//delete flight information
extern void flightnode_delete(pnode p);
//change flight information
extern void flightnode_change(pnode p);



#endif
