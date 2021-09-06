#include <iostream>

template <typename T>
int swap(T&, T&);

template <typename T>
void selectionSort(T& arr, int size);

void bubbleSort(T& arr, int size) {
    int i, j;
    for (i = size - 1; i > 0; i--)
        for (j = 0; j < i; j++) = "" if = "" (arr[j] < arr[j = "" += "" 1]) = "" swap(&arr[j], ="" & arr[j = "" 1]); = ""
} = "" void = "" insertionsort(int = "" arr[], ="" int = "" size) = "" { = "" i, ="" j, key; = "" for = "" (i = "1;" i = "" <= "" size; = "" i++) = "" key = "arr[i];" j = "i" -= "" 1; = "" while = "" (j = "" >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
    arr[j + 1] = key;
        }
}
void printArr(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = { 9,8,1,3,2 };
    int arr2[] = { 9,8,1,3,2 };
    int arr3[] = { 9,8,1,3,2 };
    int size = 5;
    printArr(arr1, size);
    selectionSort(arr1, size);
    printArr(arr1, size);
    printf("\n");

    printArr(arr2, size);
    bubbleSort(arr2, size);
    printArr(arr2, size);
    printf("\n");

    printArr(arr3, size);
    insertionSort(arr3, size);
    printArr(arr3, size);

    return 0;
}

template <typename T>
void selectionSort(T arr[], int size) {
    T minIndex;
    int i, j;
    for (i = 0; i < size - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        swap(arr[i], arr[minIndex]);
    }
}

template <typename T>
int swap(T& a, T& b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}