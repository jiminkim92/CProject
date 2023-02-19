#include <stdio.h>

int main5() {
	// page 85
	// 2.
	int num1 = 27;

	printf("%d \n", num1 >= 10);				//1
	printf("%d \n", num1 != 5);					
	
	printf("%d \n", num1 >= 27);
	printf("%d \n", num1 ==27);				//1

	printf("%d \n", num1 <= 30);				//1
	printf("%d \n", num1 <= 27);			

	//3
	//국어=86, 영어=75, 수학=88, 사회=60, 과학=96
	//평균을 구하세요 (소수점까지)
	int sum = 0;
	double avg = 0.0;

	sum = 86 + 75 + 88 + 60 + 96;
	(double)avg = sum / 5;
	printf("평균 : %lf \n", avg);
	

	//4
	//증감연산자 사용
	int num = 5;
	//각 num에 증감연산자를 적용하여 6 6 8 결과를 출력해보세요 ++, --
	printf("num의 값: %d \n", ++num);				//6
	printf("num의 값: %d \n", num++);				//6
	printf("num의 값: %d \n", ++num);				//8)




	return 0;
}