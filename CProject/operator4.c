#include <stdio.h>

int main()
{
	int kor = 50, eng = 40, math = 60;

	// ÇÕ°è : 000
	// Æò±Õ : 00

	int num1 = 70, num2 = 40, num3 = 60;
	int sum = 0;
	double avg = 0.0;

	sum = 50 + 40 + 60;
	avg = (double)sum / 3;

	printf("ÇÕ°è : %d \n", sum);
	printf("Æò±Õ : %2lf", avg);

	

	return 0;
}