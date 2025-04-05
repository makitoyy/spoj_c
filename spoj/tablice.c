#include <stdio.h>

int main()
{

    int przypadki;
    scanf("%d\n", &przypadki);
        for(int i = 0; i < przypadki ; i++)
        {
            int n;
            scanf("%d\n",&n);
            int tab[n];
            int j = 0;
            int b = n-1;    
                while(j != n)
                {
                    scanf("%d", &tab[j]);
                    j++;
                }
                while(b >= 0)
                {
                    printf("%d ", tab[b]);
                    b--;
                }
        }
return 0;    
}