#include <stdio.h>

// * ����ü �迭 *
// ����ü�� �迭�� ����� �� �ֽ��ϴ�.
// ����ü �迭�� �������̱� ������, (����ü�� ������, �迭�� ������)
// ����ü �迭 ���� �ٸ��� �ʽ��ϴ�.

#define FRUIT	0
#define VEGETABLE	1
#define CATEGORY	food[i].category?"VEGETABLE":"FRUIT"

typedef struct
{
	char name[10];
	int kcal;
	int category;
}FOOD;

void printFood(FOOD st);
void printFoodAll(FOOD*, int);

int main()
{
	FOOD food[] =
	{
		{"Apple",	50, FRUIT		},
		{"Been",	42, VEGETABLE	},
		{"Grape",	57, FRUIT		},
		{"Carrot",	33, VEGETABLE	},
		{"Pimento",	39, VEGETABLE	},
		{"Orange",	97, FRUIT		}
	};

	// ���� ����غ���
	printf("\n > ���� ��� < \n");
	for (int i = 0; i < (sizeof(food) / sizeof(FOOD)); i++) {
		printf("%s\t: %d kcal(%s)\n", food[i].name, food[i].kcal, CATEGORY);
	}

	// ����ü�� �Ѱܼ� ����غ���
	printf("\n > ����ü ��� < \n");
	for (int i = (sizeof(food) / sizeof(FOOD)); i--; ) {
		printFood(food[i]);
	}

	// ��ü�� �Ѱܼ� ����غ���
	printf("\n > ��ü �迭 ��� < \n");
	printFoodAll(food, (sizeof(food) / sizeof(FOOD)));
}

void printFood(FOOD st)
{
	printf("%s\t: %d kcal(%s)\n", st.name, st.kcal, st.category ? "VEGETABLE" : "FRUIT");
}

void printFoodAll(FOOD* fd, int len)
{
	for (int i = 0; i < len; i++) {
		printf("%s\t: %d kcal(%s)\n", fd[i].name, fd[i].kcal, fd[i].category ? "VEGETABLE" : "FRUIT");
	}
}