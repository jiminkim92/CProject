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
	//����=86, ����=75, ����=88, ��ȸ=60, ����=96
	//����� ���ϼ��� (�Ҽ�������)
	int sum = 0;
	double avg = 0.0;

	sum = 86 + 75 + 88 + 60 + 96;
	(double)avg = sum / 5;
	printf("��� : %lf \n", avg);
	

	//4
	//���������� ���
	int num = 5;
	//�� num�� ���������ڸ� �����Ͽ� 6 6 8 ����� ����غ����� ++, --
	printf("num�� ��: %d \n", ++num);				//6
	printf("num�� ��: %d \n", num++);				//6
	printf("num�� ��: %d \n", ++num);				//8)




	return 0;
}