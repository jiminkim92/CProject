#include <stdio.h>

int main4()
{
	/*
	작성자 : 000
	작성날짜 : 2023-02-18
	기능 : printf 로 문자열 출력
	*/
	// 이름. 년도, 월, 일, f ==> 변수
	// 문자열[]변수 : 이름			%s
	// 정수변수 : 년도, 월, 일		%d
	// 문자변수 : f					%c

	char name[] = "김지민";
	int year = 2023;
	int month = 2;
	int day = 18;
	char word = 'f';

	printf("작성자 : %s\n" , name);
	printf("작성날짜 :%d-%02d-%d\n", year,month,day);
	printf("기능 : print%c 로 문자열 출력",word);

	return 0;
}