#include <stdio.h>

// * ����ü�� ũ�� *
// ����ü�� �ַ� ����Ǵ� ������� ��ġ�� �˴ϴ�.
// �̶�, 32bit(4byte)�� ��ŷ(����)�� �Ǵµ�, 32bit�� ������ �Ǵ� ������
// ����� ���� �ð����� ������ ��ǻ�Ͱ� 32bit bus�� ����߱� �����Դϴ�.
// 32bit�� 1���� �ܾ�, �� word��� ���մϴ�.
// ��ǻ�Ͱ� �ѹ��� ó�� �� �� �ִ� �뷮�� ���缭 �����ϴ� ������ �׷��� ó���ӵ����� ������ ���� �� �ֱ� �����Դϴ�.
// ���࿡ DATE2�� day�� 4byte������ �߶����� �ʾҴٰ� �����غ��ô�.
// �׷��ٸ� 2���� ����� ȣ���� �ǰ�, ȣ���� �� �Ŀ� �ٽ� ó���� �ؾ��մϴ�.
// ó���� �ʿ��� ������ ����Ȱ� ������ ������, ������� ���ؼ� Ȯ�� �� �� �ֽ��ϴ�.

typedef struct {
	char  year;
	char month;
	char day;
}DATE;

typedef struct {
	char year;
	char month;
	int day;
}DATE2;

typedef struct {
	char year;
	int month;
	char day;
}DATE3;

int main()
{
	char A[3];
	printf("%d/%d\n", sizeof(A), sizeof(DATE));
	printf("%d/%d\n", sizeof(DATE2), sizeof(DATE3));
}