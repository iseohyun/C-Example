#include <stdio.h>

// * ���� ����� *
// ��������¸��� ������ �����ϴ�.
//	1. r (read mode)	: �б� ���� ���
//	2. w (write mode)	: ���� ���� ���
//	3. a (append mode)	: �߰� ���
// 
//	1. t (text mode)	: �ش� ������ �����͸� �ؽ�Ʈ ���Ϸ� �ν��ϰ� �������.
//	2. b (binary mode)	: �ش� ������ �����͸� ���̳ʸ� ���Ϸ� �ν��ϰ� �������.
//
//	1. x (exclusive mode) : ������ �ϴ� ������ �̹� �����ϸ� ���� ���濡 ������.
//	2. + (update mode)	  : ������ ���� ���� �ְ� �� ���� �ִ� ���
//
// ���� ��带 �����ؼ� ����� �� �ֽ��ϴ�.
//	> wx, rb, wb, wbx, ab, r+, w+, w+x, a+, r+b, rb+, a+b, ab+, w+bx, wb+x

int main()
{
	//FILE* pFile = fopen("example.txt", "a+");
	FILE* pFile;
	char Buf[100];

	fopen_s(&pFile, "d:\\log.txt", "a+");

	if (pFile == NULL) {
		puts("������ �� ���� �����ϴ�!");
		return false;
	}
	else {
		puts("������ ���������� �������ϴ�!");
	}

	sprintf_s(Buf, 100, "%s %s(%d)\t: %s�� ����Ǿ����ϴ�.\n", __DATE__, __TIME__, __LINE__, __FILE__);
	fputs(Buf, pFile);

	if (fclose(pFile) != 0) {
		puts("������ ���� ���� �����ϴ�!");
		return false;
	}
	else {
		puts("������ ���������� �ݾҽ��ϴ�!");
	}
}