#include <stdio.h>

// * ���а�� *
// ���ֻ���ϴ� �Լ��� ��� �⺻������ �����Ǵ� ���̺귯���� �̿��Ͽ�, ���� ȿ������ ȹ�������� �ø� �� �ֽ��ϴ�.

// M_PI, M_E�� ����ϱ� ���ؼ� #define�� �ʿ��մϴ�.
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>

void main()
{
	// math.h�� �̿��� ���а��
	printf("���밪\t|-7|\t: %d\n", abs(-7));
	printf("������\tRoot 5\t: %lf\n", sqrt(5));
	printf("�ﰢ\tSin(30)\t: %lf\n", sin(30. / 180 * M_PI));
	printf("���ﰢ\tCos-1\t: %lf\n", acos(0.5) / M_PI * 180);
	printf("Exp\te^2\t: %lf\n", exp(2));
	printf("����\te^2\t: %lf\n", pow(M_E, 2));
	printf("�α�\tlog2(9)\t: %lf\n", log2(9));
	printf("����\tfloor()\t: %lf\n\n", floor(1.9));

	// stdlib.h�� �̿��� ���� 10�� �޾ƺ���
	printf("������ : ");
	for (int i = 0; i < 10; i++) {
		printf("%d, ", rand());
	}
}