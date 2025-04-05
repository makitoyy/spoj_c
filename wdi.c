#include <stdio.h>

int main()
{
    int a,b,n;
    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b:");
    scanf(" %d", &b);
    printf("Podaj stopien przyblizenia dziesietnego a/b:");
    scanf(" %d", &n);
        if(b == 0)
        {
            printf("chuj ci w dupe nie dzieli sei przez 0");
        }
    int calkowita = a/b;
    int ulamkowa = a%b;

    printf("%d", calkowita);
    printf(".");
        for(int i = 0; i<n ; i++)
        {
            ulamkowa *= 10;
            int calkowita_czesc = ulamkowa/b;
            printf("%d", calkowita_czesc);
            ulamkowa = ulamkowa / 10;
        }
    printf("\n");

    return 0;
}