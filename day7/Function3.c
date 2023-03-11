#include <stdio.h>

typedef struct target
{

	int num1;
	int num2;
}T;

void Swap(T* t)
{
	int temp;
	temp = (*t).num1;
	(*t).num1 = (*t).num2;
	(*t).num2 = temp;
}

int main()
{
	T t1 = { 1, 2 };
	printf("변경 전 %d, %d", t1.num1, t1.num2);

	Swap(&t1);							// t1 구조체변수의 위치(주소)를 넘겨준다

	printf("변경 후 %d, %d", t1.num1, t1.num2);

	return 0;
}