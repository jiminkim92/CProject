#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	//��� printf
	printf("hello world\n");
	printf("�ּ��� //");

	// //���� �ּ� (�� ���� �ڵ尡 �ƴ϶� �޸�� ���, ctrl+shift+/)
	// /**/ ������ �ּ�
	/*
		�ȳ��ϼ���
		�ݰ����ϴ�
		������ �ּ� �Դϴ�

		Ctrl + Z : �ڷΰ���
		Ctrl + Y : �ڷΰ��� ���
	*/
	

	// ����(Variable) : �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;

	char word;					// ������ ���� ���� (1byte == 8bit)
	int number;					// ������ ����		(4byte)
	double dNumber;				// �Ǽ��� ����		(8byte)
	char str[256];				// ���ڿ��� ����	(256 byte)

	// ������ ���� ���� (���Կ�����)
	// ������ = �����Ͱ�;
	word = 'q';
	number = -3;
	dNumber = 3.145592;
	sprintf(str, "hi world");

	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	// ���� ���
	int number2 = number;		// number�� ����ִ� ���� ���(�ڷ������� �����ֱ�)
	printf("�������� %c\n", word);
	printf("�������� %d\n", number);
	printf("�Ǽ����� %lf\n", dNumber);
	printf("���ڿ����� %s\n", str);

	// + : ���ϱ�
	// - : ����
	// * : ���ϱ�
	// / : ������
	// % : ������ ���ϱ�

	// ������ �Ǵ� �Ǽ��� ���� 2���� �����
	// +, -, *, /, % ����ϱ� printf�� ����ϱ�

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