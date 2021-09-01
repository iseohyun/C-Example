#include <stdio.h>
#include <stdarg.h>

// * 가변인수 *
// va_arg, va_copy, va_end, va_start에 대한 예약어(?)를 사용합니다.
// stdarg.h를 참조하십시오.
// 주의, 몇개의 변수를 참조할 것인가는 함수에서 알 수 없기 때문에,
// 직접 인자의 갯수를 알려주어야 합니다.
// 가변인수의 매력이 인수의 갯수가 정해지지 않은만큼, 미리 갯수를 정해놓는것은 의미가 없습니다.
//
// 전통적으로 이러한 이슈를 해결하기 위해서 main에서는
// argc, argv[](or args[])를 전달합니다.
// argc는 몇개의 argument(인자)를 전송할 것인지를 의미합니다.
// 
// https://docs.microsoft.com/ko-kr/cpp/cpp/functions-with-variable-argument-lists-cpp?view=msvc-160

int myFunc(int size, ...)
{
    int _Result = 0;
    int* p;

    va_list vl;
    va_start(vl, size);
    for (int i = 0; i < size; i++)
        _Result += va_arg(vl, int);
    va_end(vl);

    return _Result;
}

void main()
{
    printf("%d\n", myFunc(5, 1, 2, 3, 4, 5));

    printf("%d\n", myFunc(10, 6, 7, 8, 9, 10, -9, -8, -7, -6, -5));

    printf("%d\n", myFunc(9, 6, 7, 8, 9, 10, -9, -8, -7, -6, -5));
}