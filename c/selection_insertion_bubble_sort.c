#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 37
#define SECONDSIZE 10
#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )

int list[SIZE];
int arr[SECONDSIZE] = { 6, 6, 8, 6, 2, 6, 6, 6, 6, 7 };
int n;
int i;

void printing()
{
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
}

void printingTwo()
{
	for (i = 0; i < SECONDSIZE; i++)
	{
		printf("%d ", arr[i]);
	}
}

int partition(int list[], int left, int right)
{
	int pivot, temp;
	int low, high;

	low = left;
	high = right + 1;
	pivot = list[right];
	SWAP(list[left], list[right], temp);
	do {
		do {
			low++;
		} while (list[low] < pivot);
		do {
			high--;
		} while (list[high] > pivot);
		if (low < high)
		{
			SWAP(list[low], list[high], temp);
			printing();
			printf("\n");
		}
	} while (low < high);
	SWAP(list[left], list[high], temp);
	return high;
}

void quick_sort(int list[], int left, int right)
{
	if (left < right) {
		int q = partition(list, left, right);
		quick_sort(list, left, q - 1);
		quick_sort(list, q + 1, right);
	}
}

void selection_sort()
{
	int i, j, least, temp;
	for (i = 0; i < SECONDSIZE - 1; i++) {
		least = i;
		for (j = i + 1; j < SECONDSIZE; j++)
			if (arr[j] < arr[least]) least = j;
		SWAP(arr[i], arr[least], temp);
	}
}

void bubble_sort()
{
	int i, j, temp;
	for (i = SECONDSIZE - 1; i > 0; i--) {
		for (j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
				SWAP(arr[j], arr[j + 1], temp);
	}
}

void insertion_sort()
{
	int i, j, key;
	for (i = 1; i < SECONDSIZE; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = key;
	}
}

int main(void)
{
	n = SIZE;
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		list[i] = rand() % 50;
	}
	printf("1)  ");
	printing();
	printf("\n");
	quick_sort(list, 0, n - 1);
	printf("2)  ");
	printing();

	printf("\n");

	int number = 0;
	printf("1600787/3 = 약 533,595.6666666667\n숫자를 입력하시오\n0. 선택정렬\n1. 삽입정렬\n2. 버블정렬\n");
	scanf_s("%d", &number);
	switch (number)
	{
	case 0:
		selection_sort();
		printingTwo();
		break;
	case 1:
		insertion_sort();
		printingTwo();
		break;
	case 2:
		bubble_sort();
		printingTwo();
		break;
	default:
		printf("잘못입력하셨습니다.");
	}
	return 0;


}