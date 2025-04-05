#include <stdio.h>
double silnia(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*silnia(n-1);
    }
}

int main()
{
    int n;
    double pom = 0;
    scanf("%d", &n);
    
        for(int i=0; i<n ;i++)
        {
            pom += 1/silnia(i);
        }
    printf("%f", pom);
    return 0;
}