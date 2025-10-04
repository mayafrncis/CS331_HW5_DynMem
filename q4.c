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
        for (int i = 0; i < 3; i++) {
                printf("%s\n", *(arr + i));
                free(*(arr + i));
        }
        free(arr);
        arr = NULL;

        return 0;
}
