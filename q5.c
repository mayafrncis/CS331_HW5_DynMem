#include <stdlib.h>
#include <stdio.h>

int main() {
	int n;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	int* grades = (int *) malloc(sizeof(int) * n);
	printf("Enter the grades: ");
	int max = 0;
	int min = 100;
	for (int i = 0; i < n; i++) {
		int grade;
		scanf("%d", &grade);
		if (grade > 100 || grade < 0) {
			printf("Error: grade out of bounds\n");
			exit(1);
		} else {
			*(grades + i) = grade;
			if (grade < min) min = grade;
			if (grade > max) max = grade;
		}
	}
	printf("Highest grade: %d\n", max);
	printf("Lowest grade: %d\n", min);

	free(grades);
	grades = NULL;

	return 0;
}
