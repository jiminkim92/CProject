#include <stdio.h>

int main4()
{
	/*
	�ۼ��� : 000
	�ۼ���¥ : 2023-02-18
	��� : printf �� ���ڿ� ���
	*/
	// �̸�. �⵵, ��, ��, f ==> ����
	// ���ڿ�[]���� : �̸�			%s
	// �������� : �⵵, ��, ��		%d
	// ���ں��� : f					%c

	char name[] = "������";
	int year = 2023;
	int month = 2;
	int day = 18;
	char word = 'f';

	printf("�ۼ��� : %s\n" , name);
	printf("�ۼ���¥ :%d-%02d-%d\n", year,month,day);
	printf("��� : print%c �� ���ڿ� ���",word);

	return 0;
}