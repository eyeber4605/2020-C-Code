#include <stdio.h>

int main(void) {
	

	typedef struct movie {
		char *title;		
		int attendance;		
	}movie;

	movie assassination;

	assassination.title = "기생충";
	assassination.attendance = 10000000;

	printf("[%s] 관객수: %d\n", assassination.title, assassination.attendance);

	return 0;
}
