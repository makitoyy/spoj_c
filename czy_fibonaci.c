#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 2;
    int *tab = NULL;
    tab = (int *)malloc(c * sizeof(int));

    int size = 2;
    tab[0] = 0;
    tab[1] = 1;

    int n;
    scanf("%d",&n);
        while (tab[size-1] <= n) 
        {
                if (size == c) 
                {
                    c *= 2;
                    tab = (int *)realloc(tab, c * sizeof(int));
                }
            tab[size] = tab[size - 1] + tab[size - 2];
            size++;
                if(tab[size - 1] * tab[size - 2] == n )
                {
                    printf("kutas");
                }

        }

        

    free(tab);
    return 0;
}
