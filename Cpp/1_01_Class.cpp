#include <stdio.h>

// * class *
// 클래스 문법은 다음과 같습니다.
//		class 클래스명 { 
//			변수선언; //멤버 변수
//			함수선언; //멤버 함수
//		};
// 
//		//함수내용
//		클래스명::함수명(){
//			함수내용;
//		}
//

class CAR {
public:
	int speed;
	int getSpeed();
	void setSpeed(int);
};

int CAR::getSpeed() {
	return speed;
}

void CAR::setSpeed(int spd) {
	speed = spd;
}

void main()
{
	CAR my;

	// 자동차의 속력은 50이라고 알려줍니다.
	my.speed = 90;
	printf("Speed : %d\n", my.getSpeed()); // 자동차야, 현재 속도를 알려줄래?

	my.setSpeed(180);	// 자동차야, 현재 속도를 100으로 변경해줘~
	printf("Speed : %d\n", my.getSpeed());
}