#include <stdio.h>

int main5() {
	// 변수 : 저장공간
	// 자료형 : 변수 안에 담길 데이터값의 형태
	
	// 변수 선언 (공간 생성)
	// 자료형 변수명;
	int num;
	char chr;
	double num2;

	// 변수 대입 (값 넣기 =)
	num = -33;
	chr = 'a';
	num2 = 3.14;
	num2 = -0.01;		// 또 담으면 전에 있던 값은 삭제하고 들어감
	
	printf("%d \n", num);
		
	num = 1515;
	printf("%d \n", num);

	// 변수 초기화 (선언과 대입을 동시에)
	int num3 = 119;
	char ch2 = '3';

	// 자료형이 적혀있다 == 공간을 처음 만든가
	// 자료형이 안적혀있다 == 변수 안에 있는 값을 사용하겠다 or 변수 안에 있는 값을 변경하겠다

	int num4 = 4;		// 공간을 처음 만듦
	num4 = 44;			// 자료형을 안적었다? 이미 있는 변수를 활용하겠다.
	printf("%d", num4);		//자료형을 안적었다? =이 없다? 변수 안에 있는 값을 사용하겠다.

	//대신 문자열(큰따옴표) 안에서 사용할때는 $d

		
	// 아 귀찮아, 한번에 선언하고 한번에 초기화하자

	int n1, n2, n3;		// 자료형 여러번 쓰기 귀찮음
	int n4 = 1, n5 = 6, n6 = 6;

	return 0;
}