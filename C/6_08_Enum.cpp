#include <stdio.h>

// * Enum *
// ����ü(Enum)�� 0���� �����Ͽ�, ���������� ��ȣ�� �ο��մϴ�.
// Enum�� ����ϴ� ������ �����������Դϴ�.
// �������, ��ũ ������ ������ٰ� �սô�. �������� �̵��� �ڵ� 3�ε�
// �ڵ忡 3�̶�� �� ������ �̰��� �������� ����������, ����������� �� ���� �����ϴ�.
// ����, �ڵ忡 Enum�� �̿��ϸ� LEFT��� �ۼ��Ѵٸ�, �ڵ�3�� �𸣴��� �ڵ带 ���� �� �ֽ��ϴ�.
// 
// ��, Enum�� ������� �ʰ�, #define�� �̿��ؼ��� �����մϴ�.
// #define�� �̿����� ���,  �ߺ��� �����ϰ�, enum�� (�⺻������) �ߺ��� �Ұ����ϱ� ������,
// �����ȯ�� ���� �ǹ�(semantics)�� ��ȯ�� ������ ���ϴ�.

enum Color {
	RED,
	ORENGE,
	YELLOW,
	GREEN,
	BLUE,
	INDIGO,
	PURPLE,
	BLACK = 10
};

enum class CppStyle {
	C_Style = 3,
	Cpp_Style,
	Cshop_Style
};

#define PINK 4

int main()
{
	printf("RED    : %d\n", RED);
	printf("YELLOW : %d\n", YELLOW);
	printf("BLUE   : %d\n", BLUE);
	printf("BLACK  : %d\n", BLACK);
	printf("PINK   : %d\n\n", PINK);

	Color A = INDIGO;
	printf("Color #1 : %d\n", A);
	printf("Color #2 : %d\n\n", Color::GREEN);

	CppStyle style = CppStyle::Cpp_Style;
	printf("Style #1 : %d\n", style);
	printf("Style #2 : %d\n\n", CppStyle::C_Style);
}