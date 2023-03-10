#include <stdio.h>

int main0() {
	//출력 printf
	printf("hello world\n");
	printf("주석은 //");

	// //한줄 주석 (이 줄은 코드가 아니라 메모로 취급, ctrl+shift+/)
	// /**/ 여러줄 주석
	/*
		안녕하세요
		반갑습니다
		여러줄 주석 입니다

		Ctrl + Z : 뒤로가기
		Ctrl + Y : 뒤로가기 취소
	*/
	

	// 변수(Variable) : 저장공간
	// 변수 선언 (변수를 만드는 방법)
	// 자료형 변수명;

	char word;					// 문자형 변수 선언 (1byte == 8bit)
	int number;					// 정수형 변수		(4byte)
	double dNumber;				// 실수형 변수		(8byte)
	char str[256];				// 문자열형 변수	(256 byte)

	// 변수에 값을 대입 (대입연산자)
	// 변수명 = 데이터값;
	word = 'q';
	number = -3;
	dNumber = 3.145592;
	sprintf(str, "hi world");

	// 변수 초기화 (변수 선언과 동시에 대입까지)
	char str2[256] = "hello world";

	// 변수 사용
	int number2 = number;		// number에 들어있는 값을 사용(자료형없이 적어주기)
	printf("문자형은 %c\n", word);
	printf("정수형은 %d\n", number);
	printf("실수형은 %lf\n", dNumber);
	printf("문자열형은 %s\n", str);

	// + : 더하기
	// - : 빼기
	// * : 곱하기
	// / : 나누기
	// % : 나머지 구하기

	// 정수형 또는 실수형 변수 2개를 만들고
	// +, -, *, /, % 계산하기 printf로 출력하기

	int num1 = 10, num2 = 5;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	int num3 = 1999, num4 = 123;
		printf("%d + %d = %d\n",num3, num4, num3 + num4);
		printf("%d - %d = %d\n",num3, num4, num3 - num4);
		printf("%d * %d = %d\n",num3, num4, num3 * num4);
		printf("%d / %d = %d\n",num3, num4, num3 / num4);
		printf("%d %% %d = %d\n",num3, num4, num3 % num4);


	return 0;
}