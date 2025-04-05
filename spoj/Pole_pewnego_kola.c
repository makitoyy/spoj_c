#include <stdio.h>
#include <math.h>
int main()
{
 
    double r , d;
    double pi = 3.141592654;
    double R;
    scanf("%lf %lf", &r , &d);
        if(d < (2*r))
        {
            d = d/2;
            R = sqrt((r*r)-(d*d))*sqrt((r*r)-(d*d));
            printf("%lf\n", pi*R);
        } 
        
return 0;
}