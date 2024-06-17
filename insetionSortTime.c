#include <math.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
    double time_spent = 0.0;
    clock_t begin = clock();
    sleep(3);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);
	
	printf("the insertion sort is %f seconds", time_spent);

	return 0;
}