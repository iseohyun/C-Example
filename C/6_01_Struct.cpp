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

int main()
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

/*
실습과제 1:
	6.25를 입력하고 출력해봅니다.
	내 생일을 입력하고 출력해 봅니다.
	2000년 13월 50일을 입력하고 출력해 봅니다.

실습과제 2:
	날짜를 입력하고, 다음 날짜를 return 받는 함수를 만들어 봅니다.

실습과제 3:
	1월31일 이후 2월 1일이 출력되도록 기능을 추가합니다.
	2월28일 이후 3월 1일이 출력되도록 기능을 추가합니다.
	윤년을 체크합니다. 4년마다 윤년 / 100년마다 윤년 아님/ 400년마다 윤년
	예)
		2020년 윤년
		2100년 윤년아님
		2000년 윤년

실습과제 4
	특정 날짜는 특정 이름까지 같이 반환합니다.
	예) 1월 1일 / "신정"
		3월 1일 / "삼일절"
		5월 5일 / "어린이날"
		6월 6일 / "현충일"
		8월 15일 / "광복절"
		10월 3일 / "개천절"
		10월 9일 / "한글날"
		12월 24일 / "크리스마스"
*/