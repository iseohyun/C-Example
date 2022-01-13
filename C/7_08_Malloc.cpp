#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

// * 동적할당 *
// 메모리는 유한한 자원입니다. 컴파일 단계에서 넉넉하게 메모리를 할당하면 좋겠지만,
// 좀 더 타이트한 운영을 위해서, 시스템 운영중에 실시간으로 할당될 크기를 판단하고,
// 해당 크기만큼만 할당하는 것을 동적 할당이라고 합니다.
// 
// 단점도 있습니다. 동적으로 할당되는 메모리는 힙 영역에 할당이 되기 때문에, 
// 프로그램이 완전 종료되기 전까지 메모리를 잡아먹게 됩니다.
// 따라서 동적할당을 잘 관리하지 않으면, 메모리오버플로우가 발생해서 비정상 동작을 하게 됩니다.
// 
// 동적할당은 반드시 해제가 일어날 수 있도록 신경써 줍시다.
// 

int main()
{
	char input[MAX_SIZE] = { 0, };
	int szArr = MAX_SIZE;
	char* pArr;

	printf("자유롭게 입력하세요 : ");
	scanf_s("%s", &input, MAX_SIZE);
	for (int i = 0; i < MAX_SIZE; i++) {
		if (input[i] == '\0') {
			szArr = i;
			break;
		}
	}
	printf("%d개의 문자를 입력받았습니다.\n", szArr);

	pArr = (char*)malloc(szArr + 1);

	if (pArr == NULL) {
		printf("메모리의 동적 할당에 실패했습니다.\n");
		return false;
	}

	printf("\n>> 동적으로 할당받은 메모리의 초깃값\n");
	for (int i = 0; i < szArr; i++) {
		printf("%c ", pArr[i]);
	}

	for (int i = 0; i < szArr; i++) {
		pArr[i] = input[i];
	}

	printf("\n\n>> 현재 동적으로 할당받은 메모리\n");
	for (int i = 0; i < szArr; i++) {
		printf("%c ", pArr[i]);
	}
	printf("\n\n");
	free(pArr);
}