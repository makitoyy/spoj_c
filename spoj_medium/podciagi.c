#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) 
    {
        int total_value = 0;

        int n;
        scanf("%d", &n);
        char v[n + 1]; // +1 to include the null terminator
        for (int j = 0; j < n; j++) 
        {
            scanf(" %c", &v[j]); // space before %c to skip any whitespace
        }
        v[n] = '\0'; // Null-terminate the string

        int m;
        scanf("%d", &m);
        char u[m + 1]; // +1 to include the null terminator
        for (int j = 0; j < m; j++) {
            scanf(" %c", &u[j]); // space before %c to skip any whitespace
        }
        u[m] = '\0'; // Null-terminate the string

        int matched_in_u[m]; // To mark matched characters in u
        memset(matched_in_u, 0, sizeof(matched_in_u)); // Initialize array with 0

        for (int k = 0; k < n; k++) 
        {
            for (int x = 0; x < m; x++) 
            {
                if (v[k] == u[x] && !matched_in_u[x]) 
                {
                    total_value++;
                    matched_in_u[x] = 1; // Mark as matched
                    break; // Break inner loop after matching
                }
            }
        }
        printf("%d\n", total_value);
    }
    
    return 0;
}
