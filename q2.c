#include <stdlib.h>
#include <stdio.h>

int main() {
	int num;
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	int* arr = (int*) calloc(num, sizeof(int));
	printf("Array after calloc:");
	for (int i = 0; i < num; i++)
		printf(" %d", *(arr + i));
	printf("\nEnter %d integers: ", num);\
	int val;
	float sum = 0;
	for (int i = 0; i < num; i++) {
		scanf("%d", &val);
		sum += val;
		*(arr + i) = val;
	}
	printf("The updated array:");
	for (int i = 0; i < num; i++) {
		printf(" %d", *(arr + i));
	}
	printf("\nAverage of the array: %f\n", sum/num);

	free(arr);
	arr = NULL;
	return 0;
}
