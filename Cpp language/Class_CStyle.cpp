#include <stdio.h>

// * class *
// 최초 개발된 C언어에서는 main에서 시작하여, 순서대로 진행하다가 main함수가 끝나면 끝나게 됩니다.
// 이를 두고, 절차지향형 언어라고 합니다. 프로그램을 이해하기 쉽지만, 대규모 프로젝트에 적합하지 않다는 의견이 많습니다.
// 이와 대비대는 개념이 객체지향형 언어입니다.
// 아래 코드는 억지로 절차지향형 언어를 객체지향으로 구현한 결과 입니다.
// 객체지향 언어라는 것은 코드의 덩어리 덩어리를 하나의 개념(객체)으로 인식하겠다는 뜻입니다.
// 객체지향이 절차지향보다 장점을 갖는 것은 객체를 모두 이해하지 않아도 객체의 동작원리(API)만 이해하면 구동할 수 있다는 것에 있습니다.
// 따라서, 분업이 좀 더 쉬워집니다.
// 자동차라는 struct로 구현한다고 할때,
// 속도라는 특성이 있겠지만, 속도가 빨라지라든지, 현재 속도를 알려달라는 명령을 어떻게 한데 담을 수 있을까요?

typedef struct {
	int speed;
	int (*getSpeed)(void*);
	void (*setSpeed)(void*, int);
}CLASS;

int getSpd(void* my);
void setSpd(void* my, int a);

void main()
{
	CLASS car;
	car.getSpeed = getSpd;
	car.setSpeed = setSpd;

	// 자동차의 속력은 50이라고 알려줍니다.
	car.speed = 50;
	printf("Speed : %d\n", car.getSpeed(&car)); // 자동차야, 현재 속도를 알려줄래?

	car.setSpeed(&car, 100);	// 자동차야, 현재 속도를 100으로 변경해줘~
	printf("Speed : %d\n", car.getSpeed(&car));
}

int getSpd(void* my) {
	return ((CLASS*)my)->speed;
}

void setSpd(void* my, int a) {
	((CLASS*)my)->speed = a;
}