#include <stdio.h>
#include <string.h>

// ��Ÿũ����Ʈ ���� (�̸�, ü��, ���ݷ�, ����)
struct unit
{
		char name[100];
	int hp;
	int atk;
	int def;
};

// typedef ���� ������ �༭ ���θ��� ����� �� �ִ�
// tyepdef : �ڷ����� �̸��� ���� ���ϴ� Ű����� ġȯ (�����ֱ�)
// ��Ÿũ����Ʈ �ǹ�
struct Building {

	char name[100];
	int hp;

} typedef �ǹ�;			// struct building -> �ǹ�

int main5() {
	struct unit ���۸� = { "���۸�", 35, 5, 0 };
	struct unit ���� = { "����", 40, 6, 0 };
	struct unit ���� = { "����", 160, 16, 1 };
	�ǹ� ���� = { "����",1500 };			// struct Building ==> �ǹ�

	printf("���۸��� ü���� %d \n", ���۸�.hp);

	// 1
	for (int i = 0; i < 100; i++) {
		���۸�.hp -= ����.atk;
		if (���۸�.hp <= 0) {
			printf("%s die", ���۸�.name);
			break;				// ������ �׸� ����
		}
		else {
			printf("���۸��� ü���� $d \n", ���۸�.hp);


			return 0;
		}
	}
}