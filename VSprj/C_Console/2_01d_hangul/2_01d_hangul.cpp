#include <stdio.h>

// 강의 노트 : https://example-code.tistory.com/entry/%ED%95%9C%EA%B8%80

#if 1
int main()
{
	char p = 0xb0;
	char q = 0xa1;
	for (int i = 0; i < 20; i++) {
		printf("%02X%02X : ", p & 0xFF, q & 0xFF);
		for (int j = 0; j < 16; j++) {
			printf("%c%c ", p, q++);
			if (!q) {
				p++;
				q = 0xA0;
			}
		}
		printf("\n");
	}
}
#else
int main()
{
	char hangle[31] = "가각갂갃간개객갞갟갠까깍깎깏깐";
	printf("%s\n", hangle);
	for (int i = 0; i < 30; i++) {
		printf("%02X ", *(hangle + i) & 0xFF);
		if (i % 2)
			printf(" / ");
		if (!((i + 1) % 10))
			printf("\n");
	}
}
#endif