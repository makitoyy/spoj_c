#include <stdio.h>
#include <math.h>

#define EPS 1e-6

int main()
{
    int n;
    scanf("%d", &n);
    int a = 1;
    int b = n;
    // zaczunamy od pierwiastka 1 x n
    
        while (abs(a - b) >= EPS)//porowanujemy do bardzo małej liczby kt\ora jest zarazem bledem obliczen
        {
            a = (a+b)/2;//liczymy srednia arytmetyczna i podstawiamy za a
            b = n/a; // b wyznaczone ze wzoru n = b * a
        }
    
    printf("%d", (a+b)/2);
        
    return 0;
}