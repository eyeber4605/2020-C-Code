#include <stdio.h>
#include <string.h>


struct date
{
	int year;			
	int month;		
	int day;		
};


struct account {
	struct date open;//계좌 개설일자
	char name[12];	//계좌주 이름
	int actnum;		//계좌번호
	double balance;	//잔고
};

int main(void) {
	struct account me = { {2020,6,12},"여준혁",1001,300000 };

	printf("구조체 크기 : %d\n", sizeof(me));
	printf("[%d %d %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);

	return 0;
}
