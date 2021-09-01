#include <stdio.h>

// * extern *
// 개발을 하다보면, 내가 열심히 개발한 코드를 공유해야 할 때도 있고,
// 남이 개발한 코드를 공유받을 때도 있습니다.
// 하지만, 이해관계에 따라서 코드를 그대로 공유하지 않을 수도 있습니다.
// 이럴때는 컴파일 된 언어를 공유할 수 있습니다.
// 해당 코드를 직접 참조 할 수 없을 때, extern을 이용하여 빌드에러를 회피 할 수 있습니다.
// 물론 컴파일이 된 후에, 각각의 코드를 짜집기 할 때(링크라고 합니다), 완성된 코드를 만들게 됩니다.

extern void exFunc();
extern int exVar;

void main()
{
	exFunc();
	printf("%d\n", exVar);
	exVar++;
	printf("%d\n", exVar);
}

/* extern.obj
#include<stdio.h>

int exVar = 100;

void exFunc() {
	printf("외부 라이브러리 함수\n");
}
*/