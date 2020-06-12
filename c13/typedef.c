#include <stdio.h>


typedef unsigned int budget;

int main(void) {


	budget year = 24500000;


	typedef int profit;
	

	profit month = 4600000;

	printf("올 예산은 %d, 이달의 이익은 %d 입니다.\n", year, month);

	return 0;
}

void test(void) {

	//새로운 자료형 budget 사용
	budget year = 2450000;

	//profit은 이 함수에서 사용 불가, 오류 발생
	//profit year;
}
