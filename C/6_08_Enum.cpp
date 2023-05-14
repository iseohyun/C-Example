// * Enum *
// 열거체(Enum)은 0부터 시작하여, 순차적으로 번호를 부여합니다.
// Enum을 사용하는 이유는 가독성때문입니다.
// 예를들어, 탱크 어플을 만들었다고 합시다. 왼쪽으로 이동은 코드 3인데
// 코드에 3이라고 써 놓으면 이것이 왼쪽인지 오른쪽인지, 업드려쏴인지 알 수가 없습니다.
// 따라서, 코드에 Enum을 이용하면 LEFT라고 작성한다면, 코드3을 모르더라도 코드를 읽을 수 있습니다.
// 
// 단, Enum을 사용하지 않고, #define을 이용해서도 가능합니다.
// #define을 이용했을 경우,  중복이 가능하고, enum은 (기본적으로) 중복이 불가능하기 때문에,
// 헤더교환을 통한 의미(semantics)의 교환이 수월해 집니다.

#include <stdio.h>

enum Color {
    RED,
    ORENGE,
    YELLOW,
    GREEN,
    BLUE,
    INDIGO,
    PURPLE,
    BLACK = 10
};

enum class CppStyle {
    C_Style = 3,
    Cpp_Style,
    Cshop_Style
};

#define PINK 4

int main()
{
    printf("RED    : %d\n", RED);
    printf("YELLOW : %d\n", YELLOW);
    printf("BLUE   : %d\n", BLUE);
    printf("BLACK  : %d\n", BLACK);
    printf("PINK   : %d\n\n", PINK);

    Color A = INDIGO;
    printf("Color #1 : %d\n", A);
    printf("Color #2 : %d\n\n", Color::GREEN);

    CppStyle style = CppStyle::Cpp_Style;
    printf("Style #1 : %d\n", style);
    printf("Style #2 : %d\n\n", CppStyle::C_Style);
}