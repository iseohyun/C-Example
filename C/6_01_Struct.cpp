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

void main()
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