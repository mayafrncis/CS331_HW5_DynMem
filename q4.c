#include <stdio.h>
#include <stdlib.h>

int main() {
	char** arr = (char **) malloc(3 * sizeof(char *));
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	for (int i = 0; i < 3; i++) {
		*(arr + i) = (char *) malloc(50 * sizeof(char));
		if (*(arr + i) == NULL) {
			printf("Memory allocation failed.\n");
			return 1;
		}
	}
	printf("Enter 3 strings: ");
        for (int i = 0; i < 3; i++) {
                scanf("%s", *(arr + i));
        }
	arr = (char **) realloc(arr, 5 * sizeof(char *));
	for (int i = 3; i < 5; i++) {
                *(arr + i) = (char *) malloc(50 * sizeof(char));
		if (*(arr + i) == NULL) {
                        printf("Memory allocation failed.\n");
                        return 1;
                }
	}
	printf("Enter 2 more strings: ");
	for (int i = 3; i < 5; i++) {
                scanf("%s", *(arr + i));
        }
	printf("All strings: ");
        for (int i = 0; i < 5; i++) {
                printf("%s ", *(arr + i));
                free(*(arr + i));
        }
	printf("\n");
        free(arr);
        arr = NULL;

        return 0;
}
