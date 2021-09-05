#include <stdio.h>
#include <time.h>

#define A 100
#define B 200
#define TIMES 100000000

/*
* 시작 시간과 끝나는 시간을 측정해서 얼마나 성능이 좋은지 알 수 있다.
* 코딩의 정석은 (대체로) 없다. 잘 짜여진 코드라 함은, 정상동작을 하는 코드가
* 빠르고 읽기 쉽게 쓰여져야 한다.
* 성능 측정은 대게 같은 동작을 여러번 반복시키는데, 그 이유는 컨디션에 따라서 빠르게 실행될 때도 있고, 느리게 실행 될 때도 있기 때문이다.
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
    start = clock(); //시간 측정 시작
    for (int i = 0; i < TIMES; i++) {
        ptr(A, B);
    }
    end = clock(); //시간 측정 끝
    result = ((double)end - start);
    printf("%f\n", result);
}

int main() {
    void (*ptr)(int, int);

    printf("성능 체크 중...\n");
    ptr = func1;
    checkTime(ptr);

    ptr = func2;
    checkTime(ptr);

    ptr = func3;
    checkTime(ptr);

    ptr = func4;
    checkTime(ptr);
}