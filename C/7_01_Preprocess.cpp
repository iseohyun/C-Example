#include <stdio.h>

// * ��ó���� *
// #define�� ��ó���⿡�� �������� �ϱ� ���� �ش���ġ�� ���� �ٿ��ֱ� �ϴ� ȿ���� �ֽ��ϴ�.
// �� �̿븸 �Ѵٸ�, �ڵ���̸� ȹ�������� ���� �� �� �ֽ��ϴ�.
// ������ġ�� ���ÿ� �����ؾ� �� ��, #define�� �����Ͽ� �ſ� ȿ�������� �Ѳ����� ���� �� ���� �ֽ��ϴ�.

#define ABC 10
#define XXX(x) x+1
#define MIN(x,y) (x>y?y:x)
#define log(x)	printf("LOG(%d)\t: %s",__LINE__, x)
#define out(x)	printf(#x " = %d\n", x)
#define Aout(x, n)	printf(#x "[%d] = %d\n", n, x[n])


void main()
{
	log("#define�� �̿��� ���\n");
	printf("ABC\t: %d\n", ABC);
	printf("XXX(3)\t: %d\n", XXX(3));
	printf("MIN(3,4): %d\n", MIN(3, 4));
	printf("MIN(5,4): %d\n\n", MIN(5, 4));

	const int NeverChange = 1;
	//NeverChange++;
	log("Const�� �̿��� ���\n");
	printf("Never\t: %d\n", NeverChange);
	out(NeverChange);

	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i;
		//out(a[i]);
		Aout(a, i);
	}
}