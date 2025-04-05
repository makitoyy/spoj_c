#include <stdio.h>

int main() {
    int przypadki;
    scanf("%d", &przypadki);
    
    for (int i = 0; i < przypadki; i++) 
    {
        int a;
        scanf("%d",&a);
        int sum = 0;
        int tab[a];
        int j = 0;    
           while(j<a)
            {
	            scanf("%d", &tab[j]);
                sum = tab[j] + sum;
                j++; 
            }
        printf("%d\n",sum);
    }
    
    return 0;
}
