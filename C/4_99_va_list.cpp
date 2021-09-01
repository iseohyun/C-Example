#include <stdio.h>
#include <stdarg.h>

// * �����μ� *
// va_arg, va_copy, va_end, va_start�� ���� �����(?)�� ����մϴ�.
// stdarg.h�� �����Ͻʽÿ�.
// ����, ��� ������ ������ ���ΰ��� �Լ����� �� �� ���� ������,
// ���� ������ ������ �˷��־�� �մϴ�.
// �����μ��� �ŷ��� �μ��� ������ �������� ������ŭ, �̸� ������ ���س��°��� �ǹ̰� �����ϴ�.
//
// ���������� �̷��� �̽��� �ذ��ϱ� ���ؼ� main������
// argc, argv[](or args[])�� �����մϴ�.
// argc�� ��� argument(����)�� ������ �������� �ǹ��մϴ�.
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