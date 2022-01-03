#include <stdio.h>

// * ����ü *
// �迭�� �����̶��, ���� ������ �����͸� ���Ű� ������ ���̾����ϴ�.
// ������, ����ü�� ��� ���� �ٸ� �����͸� ��Ƽ� �ϳ��� ������ ó�� ��� �� �� �ְ� ���ݴϴ�.
// �翬�� �ϳ��� ������ �νĵǱ� ������ ���ڷ� �����ϱ⵵ �ſ� �����մϴ�.
// ���� : �迭�� ���ڷ� ���� �� ������, �迭�� �´� ����ü�� ���� �����ϱ� ������ �����Ͱ� ���޵ȴٰ� �����ϸ� �ȵ˴ϴ�.
// 
// ������ ������ �����ϴ� :
//		struct ����ü���ĸ� {
//			Ÿ�� ����̸�;
//			Ÿ�� ����̸�; ...
//		};
//
// ���� :
//		����ü���ĸ� ������;	// �����
//		������.����̸�;		// ����

struct Date {
	int year;
	char month;
	char day;
};

void GetNextDay(Date, Date);
void GetNextDay02(Date, Date*);

int main()
{
	Date kwangbock = { 1945, 8, 15 };
	Date NextDay = { 0, 0, 0 };

	printf("������ : %d/%d/%d\n", kwangbock.year, kwangbock.month, kwangbock.day);

	GetNextDay(kwangbock, NextDay);
	printf("������ ������ : %d/%d/%d\n", NextDay.year, NextDay.month, NextDay.day);

	GetNextDay02(kwangbock, &NextDay);
	printf("������ ������ : %d/%d/%d\n", NextDay.year, NextDay.month, NextDay.day);
}

void GetNextDay(Date from, Date to)
{
	to.year = from.year;
	to.month = from.month;
	to.day = from.day + 1;
}

void GetNextDay02(Date from, Date* to)
{
	to->year = from.year;
	to->month = from.month;
	to->day = from.day + 1;
}

/*
�ǽ����� 1:
	6.25�� �Է��ϰ� ����غ��ϴ�.
	�� ������ �Է��ϰ� ����� ���ϴ�.
	2000�� 13�� 50���� �Է��ϰ� ����� ���ϴ�.

�ǽ����� 2:
	��¥�� �Է��ϰ�, ���� ��¥�� return �޴� �Լ��� ����� ���ϴ�.

�ǽ����� 3:
	1��31�� ���� 2�� 1���� ��µǵ��� ����� �߰��մϴ�.
	2��28�� ���� 3�� 1���� ��µǵ��� ����� �߰��մϴ�.
	������ üũ�մϴ�. 4�⸶�� ���� / 100�⸶�� ���� �ƴ�/ 400�⸶�� ����
	��)
		2020�� ����
		2100�� ����ƴ�
		2000�� ����

�ǽ����� 4
	Ư�� ��¥�� Ư�� �̸����� ���� ��ȯ�մϴ�.
	��) 1�� 1�� / "����"
		3�� 1�� / "������"
		5�� 5�� / "��̳�"
		6�� 6�� / "������"
		8�� 15�� / "������"
		10�� 3�� / "��õ��"
		10�� 9�� / "�ѱ۳�"
		12�� 24�� / "ũ��������"
*/