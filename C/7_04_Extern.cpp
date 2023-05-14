// * extern *
// 개발을 하다보면, 내가 열심히 개발한 코드를 공유해야 할 때도 있고,
// 남이 개발한 코드를 공유받을 때도 있습니다.
// 하지만, 이해관계에 따라서 코드를 그대로 공유하지 않을 수도 있습니다.
// 이럴때는 컴파일 된 언어를 공유할 수 있습니다.
// 해당 코드를 직접 참조 할 수 없을 때, extern을 이용하여 빌드에러를 회피 할 수 있습니다.
// 물론 컴파일이 된 후에, 각각의 코드를 짜집기 할 때(링크라고 합니다), 완성된 코드를 만들게 됩니다.

// 1] gcc -c StaticLib.cpp // object파일을 만듭니다.
// 2] ar rcs StaticLib.a StaticLib.o //archive파일을 만듭니다.

// 3] gcc -c 7_04_Extern.cpp -o 7_04_Extern.o // object파일을 만듭니다.
// 4] gcc -o 7_04_Extern 7_04_Extern.o StaticLib.a // 수행파일을 만듭니다.

// 3&4] gcc -o 7_04_Extern 7_04_Extern.cpp StaticLib.a
// 5] 7_04_Extern.exe // 실행합니다.

#include <stdio.h>

extern void fnStaticLib();
extern int plus10(int x);

int main()
{
    fnStaticLib();
    printf("%d\n", plus10(10));
}

/* 
실습과제 : 
    StaticLib 프로젝트에 minus7 함수를 추가하고, 빌드합니다.
    minus7함수를 만듭니다.
*/