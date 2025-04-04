#include <stdio.h>
#include <math.h>

// rownanie x*x = 2020
// metodo bisekcji

#define epsilon 1e-6
double f(double x)
{
    return x*x - 2020;
}

int main()
{
    double a,b;
    a = 0;
    b = 50;
    double x = 0;
        while(fabs(a - b) > epsilon)
        {
            x = (a+b)/2;
                if(fabs(f(x)) <= epsilon)
                {
                    break;
                }  
                else
                {
                    if((f(a)*f(x)) < 0)
                    {
                        b = x;
                    }
                    else
                    {
                        a = x;
                    }
                }
            
        }
     printf("%f",x);
    
    return 0;
}