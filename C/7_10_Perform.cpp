#include <stdio.h>
#include <time.h>

#define A 100
#define B 200
#define TIMES 100000000

/*
* ���� �ð��� ������ �ð��� �����ؼ� �󸶳� ������ ������ �� �� �ִ�.
* �ڵ��� ������ (��ü��) ����. �� ¥���� �ڵ�� ����, �������� �ϴ� �ڵ尡
* ������ �б� ���� �������� �Ѵ�.
* ���� ������ ��� ���� ������ ������ �ݺ���Ű�µ�, �� ������ ����ǿ� ���� ������ ����� ���� �ְ�, ������ ���� �� ���� �ֱ� �����̴�.
*
*/

void func1(int a, int b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void func2(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

inline void func3(int a, int b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

inline void func4(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void checkTime(void (*ptr)(int, int)) {
    clock_t start, end;
    double result;
    start = clock(); //�ð� ���� ����
    for (int i = 0; i < TIMES; i++) {
        ptr(A, B);
    }
    end = clock(); //�ð� ���� ��
    result = ((double)end - start);
    printf("%f\n", result);
}

int main() {
    void (*ptr)(int, int);

    printf("���� üũ ��...\n");
    ptr = func1;
    checkTime(ptr);

    ptr = func2;
    checkTime(ptr);

    ptr = func3;
    checkTime(ptr);

    ptr = func4;
    checkTime(ptr);
}