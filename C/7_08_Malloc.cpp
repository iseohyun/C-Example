#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

// * �����Ҵ� *
// �޸𸮴� ������ �ڿ��Դϴ�. ������ �ܰ迡�� �˳��ϰ� �޸𸮸� �Ҵ��ϸ� ��������,
// �� �� Ÿ��Ʈ�� ��� ���ؼ�, �ý��� ��߿� �ǽð����� �Ҵ�� ũ�⸦ �Ǵ��ϰ�,
// �ش� ũ�⸸ŭ�� �Ҵ��ϴ� ���� ���� �Ҵ��̶�� �մϴ�.
// 
// ������ �ֽ��ϴ�. �������� �Ҵ�Ǵ� �޸𸮴� �� ������ �Ҵ��� �Ǳ� ������, 
// ���α׷��� ���� ����Ǳ� ������ �޸𸮸� ��Ƹ԰� �˴ϴ�.
// ���� �����Ҵ��� �� �������� ������, �޸𸮿����÷ο찡 �߻��ؼ� ������ ������ �ϰ� �˴ϴ�.
// 
// �����Ҵ��� �ݵ�� ������ �Ͼ �� �ֵ��� �Ű�� �ݽô�.
// 

int main()
{
	char input[MAX_SIZE] = { 0, };
	int szArr = MAX_SIZE;
	char* pArr;

	printf("�����Ӱ� �Է��ϼ��� : ");
	scanf_s("%s", &input, MAX_SIZE);
	for (int i = 0; i < MAX_SIZE; i++) {
		if (input[i] == '\0') {
			szArr = i;
			break;
		}
	}
	printf("%d���� ���ڸ� �Է¹޾ҽ��ϴ�.\n", szArr);

	pArr = (char*)malloc(szArr + 1);

	if (pArr == NULL) {
		printf("�޸��� ���� �Ҵ翡 �����߽��ϴ�.\n");
		return false;
	}

	printf("\n>> �������� �Ҵ���� �޸��� �ʱ갪\n");
	for (int i = 0; i < szArr; i++) {
		printf("%c ", pArr[i]);
	}

	for (int i = 0; i < szArr; i++) {
		pArr[i] = input[i];
	}

	printf("\n\n>> ���� �������� �Ҵ���� �޸�\n");
	for (int i = 0; i < szArr; i++) {
		printf("%c ", pArr[i]);
	}
	printf("\n\n");
	free(pArr);
}