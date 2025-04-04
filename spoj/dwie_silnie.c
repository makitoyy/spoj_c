#include <stdio.h>
int silnia(int n){
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*silnia(n-1);
    }    
        
}


int main(){
    int przypadki;
    scanf("%d",&przypadki);
    for(int i=0;i<przypadki;i++)
    {
        int n;
        scanf("%d",&n);
            if(n<10)
            {
                printf("%d",(silnia(n)/10)%10);
                printf(" ");
                printf("%d",silnia(n)%10);
                printf("\n");
            }
            else if(n>=10)
            {
                printf("0 0\n");
            }
    }
    
    return 0;
}