#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int count;

void fibonacci(int prev_number, int number);

 int main(void) { 

	auto prev_number = 0, number = 1;

	printf("피보나츠를 몇 개 구할까요?(3 이상) >> ");
	//전역변수를 표준입력으로 저장
	scanf("%d", &count);
	if (count <= 2)
		return 0;

	printf("1 ");
	fibonacci(prev_number, number);
	printf("\n");
}
void fibonacci(int prev_number, int number) {
	static int i = 1;

	while (i++ < count) {
		int next_num = prev_number + number;
		prev_number = number;
		number = next_num;
		printf("%d ", next_num);
		fibonacci(prev_number, number);
	}
}
