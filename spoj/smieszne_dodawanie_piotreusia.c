#include <stdio.h>

int odwrotnosc(int a)
{
    int pom = 0;
        while(a != 0)
        {
            int os = a % 10;
            pom = pom * 10 + os;
            a/=10;
        }
    return pom;
}


int main() 
{
    int przypadki;
    scanf("%d", &przypadki);
    
    for (int i = 0; i < przypadki; i++) 
    {
        int a;
        scanf("%d",a);
        int wskaz=0;
            while (a != odwrotnosc(a))
            {
                    a = a + odwrotnosc(a);
                    wskaz++;

            }
        printf("%d\n %d\n",a,wskaz);
        wskaz = 0; 
    }
    return 0;
}
