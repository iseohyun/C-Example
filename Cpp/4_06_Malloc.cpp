#include <iostream>
using namespace std;

// * new *
// malloc�Լ��� include���� �ʴ��� �������� ������ �� �ֽ��ϴ�.
// �迭 ���·� �Ҵ���� ��ü�� �ݵ��, delete[]�� ���� �� �� �ֵ��� �սô�.
//-> new, delete

int main()
{
	int* p = new int[32];
	for (int i = 0; i < 32; i++) {
		p[i] = i;
		printf("%4d ", p[i]);
		if ((i % 8) == 7) cout << endl;
	}

	delete[] p;

	int* pp = new int;
	delete pp;
}