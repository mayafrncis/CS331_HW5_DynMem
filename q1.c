#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	int* arr = (int*) malloc(sizeof(int) * num);
	int sum = 0;
	for (int i = 0; i < num; i++) {
		int val;
		printf("Enter a value: ");
		scanf("%d", &val);
		sum += val;
		*(arr + i) = val;
	}
	printf("Sum of values: %d\n", sum);
	free(arr);
	arr = NULL;

	return 0;
}
