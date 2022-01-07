using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

// * class *
// ���� ���ߵ� C������ main���� �����Ͽ�, ������� �����ϴٰ� main�Լ��� ������ ������ �˴ϴ�.
// �̸� �ΰ�, ���������� ����� �մϴ�. ���α׷��� �����ϱ� ������, ��Ը� ������Ʈ�� �������� �ʴٴ� �ǰ��� �����ϴ�.
// �̿� ����� ������ ��ü������ ����Դϴ�.
// �Ʒ� �ڵ�� ������ ���������� �� ��ü�������� ������ ��� �Դϴ�.
// ��ü���� ����� ���� �ڵ��� ��� ����� �ϳ��� ����(��ü)���� �ν��ϰڴٴ� ���Դϴ�.
// ��ü������ �������⺸�� ������ ���� ���� ��ü�� ��� �������� �ʾƵ� ��ü�� ���ۿ���(API)�� �����ϸ� ������ �� �ִٴ� �Ϳ� �ֽ��ϴ�.
// ����, �о��� �� �� �������ϴ�.
// �ڵ������ struct�� �����Ѵٰ� �Ҷ�,
// �ӵ���� Ư���� �ְ�����, �ӵ��� �����������, ���� �ӵ��� �˷��޶�� ����� ��� �ѵ� ���� �� �������?

typedef struct {
	string name;
	string (*getName)(void*);
	void (*setName)(void*, string);
}HUMAN;

string getName(void* my);
void setName(void* my, string a);

int main()
{
	HUMAN my;
	my.getName = getName;
	my.setName = setName;

	my.name = "�ӱ�";
	printf("Name : %s\n", my.getName(&my).c_str());

	my.setName(&my, "ȣ��");
	printf("New Name : %s\n", my.getName(&my).c_str());
}

string getName(void* my) {
	return ((HUMAN*)my)->name;
}

void setName(void* my, string a) {
	((HUMAN*)my)->name = a;
}