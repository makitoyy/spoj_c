#include <stdio.h>

int main()
{
    int n = 0;
    while(n != 1000000)
    {    
        int pom = 0;
            for(int i = 1; i < n; i++)
            {
                if(n % i == 0)
                {
                    pom += i;
                }
            }
            if(pom == n)
            {
                printf("Liczba idealna jest: %d\n", pom);

            }
        n++;
    }
    return 0;
}