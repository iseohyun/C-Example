#include <iostream>
#define SZ_LIST 7

void bubble_sort(char list[], int size);
void selection_sort(char list[], int size);
void selection_sort2(char list[], int size);
void insertion_sort(char list[], int size);

void showList(char list[], const char* str = " ");

void main() {
	char list[SZ_LIST] = { 9, 2, 7, 3, 4, 5, 1 };
	int input;
	void (*sort)(char[], int);
	printf("1. 버블정렬\n2. 선택정렬\n3. 삽입정렬\n\n [1-3]: ");
	std::cin >> input;
	switch (input) {
	case 1:
		sort = bubble_sort;
		break;
	case 2:
		sort = selection_sort;
		break;
	case 3:
		sort = insertion_sort;
		break;
	default :
		sort = bubble_sort;
	}
	printf("다음 단계로 넘어가기 위해서 엔터를 눌러 주세요.\n\n");
	getchar();
	showList(list, "초기 : ");
	getchar();
	sort(list, SZ_LIST);
	showList(list, "결과 : ");
}

void showList(char list[], const char* str) {
	printf(str);
	for (int i = 0; i < SZ_LIST; i++) {
		printf("\t%d", list[i]);
	}
	printf("\n");
}

void ChkIdx(int i, int j) {
	int max = (i>j)?i:j;
	printf("\t");
	for (int p = 0; p <= max; p++) {
		if (p == i) {
			printf("▲i");
		}
		if (p == j) {
			printf("△j\t");
		}
		else {
			printf("\t");
		}
	}
	printf("\n");
	getchar();
}

void selection_sort2(char list[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			showList(list);
			ChkIdx(i, j);
			if (list[i] > list[j]) {
				char tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
				showList(list, "swap >");
				ChkIdx(i, j);
			}
		}
	}
}

void bubble_sort(char list[], int size) {
	for (int i = size - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			showList(list);
			if (list[j] > list[j + 1]) {
				char tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
				showList(list,"Swap>");
			}
			ChkIdx(j, j + 1);
		}
	}
}

void selection_sort(char list[], int size) {
	for (int i = 0; i < size - 1; i++) {
		char min = list[i];
		char minIdx = i;
		char buf[10];

		// 리스트에서 가장 작은 값을 찾습니다.
		for (int j = i + 1; j < size; j++) {
			showList(list);
			ChkIdx(i, j);
			if (min > list[j])
			{
				min = list[j];
				minIdx = j;
			}
		}

		// 가장 작은 값이 자기 자신이 아니면, swap을 시도합니다.
		if (minIdx != i) {
			char tmp = list[i];
			list[i] = list[minIdx];
			list[minIdx] = tmp;
			sprintf_s(buf, "[%d]%d", minIdx, min);
			showList(list, buf);
			ChkIdx(i, minIdx);
		}
	}
}

void insertion_sort(char list[], int size)
{
	int i, j, remember;
	char buf[10];

	for (i = 1; i < size; i++)
	{
		remember = list[(j = i)];
		sprintf_s(buf, "[%d]%d", i, remember);
		showList(list, buf);

		while (--j >= 0 && remember < list[j]) {
			list[j + 1] = list[j];
		}
		list[j + 1] = remember;

		showList(list, "Swap");
		ChkIdx(i, j + 1);
	}
}