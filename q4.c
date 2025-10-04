#include <stdio.h>
#include <stdlib.h>

int main() {
	char** arr = (char **) malloc(3 * sizeof(char *));
	for (int i = 0; i < 3; i++)
		*(arr + i) = (char *) malloc(50 * sizeof(char));
	printf("Enter 3 strings:");
        for (int i = 0; i < 3; i++) {
                scanf("%s", *(arr + i));
        }
	arr = (char **) realloc(arr, 5 * sizeof(char *));
	for (int i = 3; i < 5; i++)
                *(arr + i) = (char *) realloc(*(arr + i), 50 * sizeof(char));
	printf("Enter 2 more strings:");
	for (int i = 3; i < 5; i++) {
                scanf("%s", *(arr + i));
        }
        for (int i = 0; i < 5; i++) {
                printf("%s\n", *(arr + i));
                free(*(arr + i));
        }
        free(arr);
        arr = NULL;

        return 0;
}
