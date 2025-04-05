#include <stdio.h>
#include <stdlib.h>

// Function to print the prime numbers
void print(int* a, int size) 
{
    for (int i = 2; i < size; i++) 
    {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    // Allocate memory for the sieve array
    int* tab = (int*)malloc((n + 1) * sizeof(int));
    if (tab == NULL) 
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the sieve array
    for (int i = 0; i <= n; i++)
     {
        tab[i] = 1;
    }

    // Implementing the Sieve of Eratosthenes
    for (int j = 2; j * j <= n; j++) 
    {
        if (tab[j] == 1)
        {
            for (int k = j * j; k <= n; k += j) 
            {
                tab[k] = 0;
            }
        }
    }

    // Print the prime numbers
    print(tab, n + 1);

    // Free the allocated memory
    free(tab);
    return 0;
}
