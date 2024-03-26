#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of Array\n");
    scanf("%d", &n);

    int *A = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        *(A + i) = i + 1;
    }

    int *b = (int*)realloc(A, 2 + n * sizeof(int));
    printf("prev: %p after: %p\n", A, b);

    for(int i = 0; i < 2 * n; i++) {
        printf("%d\n", *(b + i));
    }

    free(b); // Free the memory allocated by realloc or malloc
    return 0;
}
