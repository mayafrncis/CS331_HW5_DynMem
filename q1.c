#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	int* arr = (int*) malloc(sizeof(int) * num);
	if (arr == NULL) {
		printf("Memory allocation failed.");
		return 1;
	}
	int sum = 0;
	printf("Enter %d integers:", num);
	for (int i = 0; i < num; i++) {
		int val;
		scanf(" %d", &val);
		sum += val;
		*(arr + i) = val;
	}
	printf("Sum of the array: %d\n", sum);
	free(arr);
	arr = NULL;

	return 0;
}
