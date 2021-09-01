#include <iostream>
using namespace std;

/* >> 새로운 형태의 대입
* 기존에 a = 3;으로 대입할 수 있었다면,
* a(3)으로도 대입이 가능하다.
*
*/

int main(void)
{
	int a(3);
	cout << a << endl;

	string name("MyName");
	cout << name << endl;
}