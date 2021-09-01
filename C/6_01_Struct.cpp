#include <stdio.h>

// * 구조체 *
// 배열의 단점이라면, 같은 형식의 데이터만 열거가 가능한 점이었습니다.
// 하지만, 구조체의 경우 전혀 다른 데이터를 모아서 하나의 데이터 처럼 사용 할 수 있게 해줍니다.
// 당연히 하나의 구조로 인식되기 때문에 인자로 전달하기도 매우 수월합니다.
// 주의 : 배열을 인자로 전달 할 때에는, 배열에 맞는 구조체를 새로 생성하기 때문에 포인터가 전달된다고 생각하면 안됩니다.
// 
// 문법은 다음과 같습니다 :
//		struct 구조체형식명 {
//			타입 멤버이름;
//			타입 멤버이름; ...
//		};
//
// 사용시 :
//		구조체형식명 변수명;	// 선언시
//		변수명.멤버이름;		// 사용시

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

	printf("광복절 : %d/%d/%d\n", kwangbock.year, kwangbock.month, kwangbock.day);

	GetNextDay(kwangbock, NextDay);
	printf("광복절 다음날 : %d/%d/%d\n", NextDay.year, NextDay.month, NextDay.day);

	GetNextDay02(kwangbock, &NextDay);
	printf("광복절 다음날 : %d/%d/%d\n", NextDay.year, NextDay.month, NextDay.day);
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