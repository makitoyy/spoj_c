#include <stdio.h>
#include <math.h>
#define max 10
#define M_PI		3.14159265358979323846
double silnia(double n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n*silnia(n-1); 
    }
}
double potega(double podtstawa,int wykladnik)
{
        for(int k = 0;k < wykladnik; k++)
        {
            podtstawa *= podtstawa;
        }
    return podtstawa;
}
int main()
{
    /*double n;
    scanf("podaj gnoju jakie to ma być przybłiżenie: %d\n", &n);
    double c;
    scanf("jaka czesc 2 Pi ma byc katem: %d", &c);*/
    double angle_fraction = 1.0 / 3.0;  

    double przyblizenie = 0;
        for(int i = 1; i <= max ; i++ )
        {
            przyblizenie += (potega(-1, i) / silnia(2 * i)) * potega(angle_fraction * M_PI, 2 * i); 
        }
    printf("%f", przyblizenie);
    return 0;
}