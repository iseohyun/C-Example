#include <stdio.h>

int main()
{
	//EUC-KR : 각(B0A2 : 1011 0000 1010 0010)
	//유니코드 : 각(AC01 : 1010 1100 0000 0001)

	char16_t c[5] = { 0xA2B0, 0x4181, 0x4281, 0xA3B0, 0 };
	printf("EUC-KR   : %s\n", (char*)&c);

	char str[10] = "\uac01\uac02\uac03\uac04";
	printf("Uni-Code : %s\n", str);
}