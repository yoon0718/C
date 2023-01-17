#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 37
#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )

int list[SIZE];
int n;
int i;
int q;
int listtwo;

void printing()
{
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}


int median_of_three(int listtwo, int left, int right)
{
	int mid;
	mid = (left + right) / 2;
	if (list[left > list[mid]])
		SWAP(left, mid, listtwo);
	if (list[left] > list[right])
		SWAP(left, right, listtwo);
	if (list[mid] > list[right])
		SWAP(mid, right, listtwo);
	return mid;
}

int partition(int list[], int left, int right)
{
	int pivot, temp;
	int low, high;
	int median;
	low = left;
	high = right + 1;
	median = median_of_three(list, left, right);
	pivot = list[median];
	SWAP(list[left], list[median], temp);
	printing();
	do {
		do {
			low++;
		} while (low <= right && list[low] < pivot);
		do {
			high--;
		} while (high >= left && list[high] > pivot);
		if (low < high)
		{
			SWAP(list[low], list[high], temp);
			printing();
		}
	} while (low < high);
	SWAP(list[left], list[high], temp);
	return high;
}

void quick_sort(int list[], int left, int right)
{
	if (left < right) {
		q = partition(list, left, right);
		quick_sort(list, left, q - 1);
		quick_sort(list, q + 1, right);
	}

}

int main(void)
{
	n = SIZE;
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		list[i] = rand() % 37;
	}
	printf("1)  ");
	printing();
	quick_sort(list, 0, n - 1);
	printf("2)  ");
	printing();

}