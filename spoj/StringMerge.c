#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* String_merge(char*, char*);

int main()
{
    int przypadki;
    scanf("%d", &przypadki); // Usunięcie niepotrzebnego getchar() po scanf
    getchar(); // Dodanie getchar() w celu usunięcia nowej linii po wprowadzeniu liczby przypadków

    for (int i = 0; i < przypadki; i++)
    {
        char a[100], b[100];
        scanf("%s %s", a, b); // Wczytanie stringów

        char* merged = String_merge(a, b);
        printf("%s\n", merged); // Dodanie nowej linii po każdym wyniku

        free(merged);
    }

    return 0;
}

char* String_merge(char* first, char* second)
{
    unsigned f_length = strlen(first);
    unsigned s_length = strlen(second);
    unsigned min_length;
    if(f_length>s_length)
    {
        min_length = s_length;
    }
    else
    {
        min_length = f_length;
    }
    char* result = (char*)malloc(2 * min_length + 1); // Alokacja pamięci dla result
    if(result)
    {
        unsigned i = 0;
        
        for (unsigned j = 0; j < min_length; ++j) 
        {
            result[2 * j] = first[j];
            result[2 * j + 1] = second[j];
        }
        result[2 * min_length] = '\0'; // Dodanie znaku końca stringu
    }
    return result;
}
