#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a = 1, b = 1;
    int pom = 0;
        for(int i = 1; i < 100; i++)
        {
            for(int j = 1; j < 100; j++)
            {
                a = i;
                b = j;
                    while(a <= 2024)
                    {
                            if( a == 2024)
                            {
                                printf(" %d %d %d ",a,i,j);                            
                            }
                        pom = a;
                        a = b;
                        b = pom + b;

                    }
                
            }
        }
    return 0;
}
