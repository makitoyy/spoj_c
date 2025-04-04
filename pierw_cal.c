#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int pom = 1;
    int cal = n;
    
        for(int i = 1;i <= sqrt(n);i++)// Do liczenia pierwiatka uzywam pierwiatka zgadza sie
        {
            pom += 2;
            cal -= pom;
        }
        printf("%d",cal);
    return 0;
}