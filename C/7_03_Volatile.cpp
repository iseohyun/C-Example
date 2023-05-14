// * 임베디드 *
// 아래 예제에서는 값이 변동될 이유가 없습니다.
// 하지만, 임베디드의 세계에서는 실행중에 센서값이 들어와서 값이 변할 수 있습니다.
// 그러면 프로그램은 이미 읽은 값은 신뢰하고 그대로 사용하는 것이 아니고
// 읽기가 시도 될 때마다, 해당 변수를 읽어와야 합니다.
// 이때 사용되는 키워드가 volatile입니다.

#include <stdio.h>

int main()
{
    volatile int sensor = 1;

    printf("Sensor : %d\n", sensor);
    printf("Sensor : %d\n", sensor);
    printf("Sensor : %d\n", sensor);
}