#include <stdio.h>

typedef struct _data
{
	int year;		//년
	int month;		//월
	int day;		//일

} date;



int main(void) {

	typedef struct 
	{
		char title[30];			//제목
		char company[30];		//제작회사
		char kinds[30];			//종류
		date release;			//출시일
	} software;

	software vs = { "비주얼스튜디오 커뮤니티", "MS", "통합개발환경", { 2018, 8, 29} };

	printf("제품명: %s\n", vs.title);
	printf("회사: %s\n", vs.company);
	printf("종류: %s\n", vs.kinds);
	printf("출시일: %d. %d. %d\n", vs.release.year, vs.release.month, vs.release.day);

	return 0;
}
