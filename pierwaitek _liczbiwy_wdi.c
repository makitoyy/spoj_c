#include <stdio.h>
#include <math.h>
int main(int arg, char** agrv)
{
    int n;
    scanf("%d", &n);
    int cal = 0;
        for(int i = 1; i <= n; i += 2)
        {
            cal += i;
        }
    printf("%d", cal); 
        
    return 0;
}