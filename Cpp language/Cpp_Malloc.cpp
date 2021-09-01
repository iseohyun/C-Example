#include <iostream>
using namespace std;

// * new *
// malloc함수를 include하지 않더라도 동적으로 생성할 수 있습니다.
// 배열 형태로 할당받은 개체는 반드시, delete[]로 해제 할 수 있도록 합시다.
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