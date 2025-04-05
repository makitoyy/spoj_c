#include <stdio.h>
#include <math.h>
int main(){
    int pom;
    scanf("%d", &pom);

    for(int n = pom;n>0;n--)
    {
        int j;

        if(j<0)
        {
            break;
        }

        scanf("%d", &j);
        int d=3;
        for(int i=0;i<j;i++)
        {
            if(j<2)
            {
                printf("NIE\n");
                break;
            }
            if(j==2)
            {
                printf("TAK\n");
                break;
            }
            if(j%2==0)
            {
                printf("NIE\n");
                break;
            }
            if(j%d==0 && d!=j)
            {
                printf("NIE\n");
                break;
            }
            if(j==d)
            {
                printf("TAK\n");
                break;
            }
            d++;
        }
    }
    return 0;
}