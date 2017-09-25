#include"flight.h"
int main(void)
{
	pnode h;
	int i;
	flightnode_init(&h);
	sleep(1);
	system("clear");
	sleep(1);
	printf("\t\t深圳南方航空航班信息表\n");
	printf("1.班号 2.起始地址 3.终止地址 4.价格 5.起飞时间 6.到达时间\n\n\n");
	while(1)
	{
		printf("======================================================\n");
		printf("1.录入 2.查看 3.搜索 4.插入 5.删除 6.修改 7.退出\n");
		printf("请选择：");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				   printf("1.班号 2.起始地址 3.终止地址 4.价格 5.起飞时间 6.到达时间\n");
				   flight_input(h);
				   break;
			case 2:rank_by_ctime(h);
				   printf("班号    始发    终点    价格    起飞    到达\n");
				   flightnode_show(h);
				   break;
			case 3:search_bynum(h);
				   break;
			case 4:flightnode_add(h);
				   break;
			case 5:flightnode_delete(h);
				   break;
			case 6:flightnode_change(h);
				   break;
			case 7:return 0;
		}

	}
	return 0;
}
