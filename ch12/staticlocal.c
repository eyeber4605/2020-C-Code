#include <stdio.h>

void increment(void);	

int main(void) {
	
	//자동 지역변수
	for (int count = 0; count < 3; count++)
		increment();	
}

void increment(void) {
	
	static int sindex = 1;	
	auto int aindex = 1;	

	printf("정적 지역변수 sindex: %2d,\t", sindex++);
	printf("자동 지역변수 aindex: %2d\n", aindex++);
}
