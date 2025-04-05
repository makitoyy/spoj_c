#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 2;
    int *tab = NULL;
    tab = (int *)malloc(c * sizeof(int));
        if (tab == NULL) 
        {
            fprintf(stderr, "Initial memory allocation failed\n");
            return 1;
        }

    int size = 2;
    tab[0] = 0;
    tab[1] = 1;

        while (tab[size-1] <= 1000000) 
        {
            if (size == c) {
                c *= 2;
                tab = (int *)realloc(tab, c * sizeof(int));
                if (tab == NULL) 
                {
                    fprintf(stderr, "Memory reallocation failed\n");
                    return 1;
                }
            }
            tab[size] = tab[size - 1] + tab[size - 2];
            size++;
        }

        for (int i = 0; i < size; i++) 
        {
            printf("%d ", tab[i]);
        }
        printf("\n");

    free(tab);
    return 0;
}
