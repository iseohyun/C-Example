#include <stdio.h>

// * 문자열 *
// 문자열은 (당연하게도) 문자들의 집합입니다.
// 문자열의 특징은, 마지막이 0(=Null)이어야 한다는 것입니다.

int main()
{
	char input[100] = { 0, }; // 0 으로 초기화하지 않으면 쓰레기 정보까지 출력이 됩니다.

	printf("문자를 입력하세요 : ");
	//scanf("%c", input);
	scanf_s("%c", input, (unsigned int)sizeof(input));
	printf("입력한 문자 : %c\n", input[0]);

	for (int i = 0; i < 100; i++) {	// 엔터(Enter)를 누르면 문자 2개가 입력됩니다. (\n\r)
		if (getchar() == '\n') break;
	}

	printf("문자열을 입력하세요 : ");
	//scanf("%s", &input[1]);
	scanf_s("%s", input + 1, (unsigned int)(sizeof(input) - 1));
	printf("입력한 모든 문자 : %s\n", input);
}