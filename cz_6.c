#include <stdio.h>
#include <math.h>
void sort(int* tab)
{
    
}

int main()
{

    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);
        for(int i = 2; i < n; i++)
        {
        int tab_a[100];
        int tab_b[100];
        int tab_roz[100];
        int j = 0;    
            if(n%i==0)
            {
                int a = n/i;
                int b = i;
                //printf("%d %d",a,b);
                tab_a[j] = a;
                tab_b[j] = b;
                tab_roz[j] = abs(a-b);        
            }
            j++;
        }
    return 0;
}