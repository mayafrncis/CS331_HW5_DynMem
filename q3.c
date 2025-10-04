#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arr = (int *) malloc(10 * sizeof(int));
	printf("Enter 10  integers: ");\
	int val;
	for (int i = 0; i < 10; i++)
		scanf("%d", (arr + i));
	arr = (int *) realloc(arr, 5 * sizeof(int));
	printf("First five elements after resizing array:");
	for (int i = 0; i < 5; i++) {
		printf(" %d", *(arr + i));
	}
	printf("\n");
	free(arr);
	arr = NULL;

	return 0;
}
