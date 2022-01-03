#include <stdio.h>

// * 구조체 배열 *
// 구조체도 배열로 사용할 수 있습니다.
// 구조체 배열도 포인터이기 때문에, (구조체도 포인터, 배열도 포인터)
// 구조체 배열 역시 다르지 않습니다.

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

	// 직접 출력해보기
	printf("\n > 직접 출력 < \n");
	for (int i = 0; i < (sizeof(food) / sizeof(FOOD)); i++) {
		printf("%s\t: %d kcal(%s)\n", food[i].name, food[i].kcal, CATEGORY);
	}

	// 구조체를 넘겨서 출력해보기
	printf("\n > 구조체 출력 < \n");
	for (int i = (sizeof(food) / sizeof(FOOD)); i--; ) {
		printFood(food[i]);
	}

	// 전체를 넘겨서 출력해보기
	printf("\n > 전체 배열 출력 < \n");
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