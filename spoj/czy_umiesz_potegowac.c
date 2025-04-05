#include <stdio.h>

int main() {
        int base, exponent;
    int przypadki;
   
    for(int i=0;i<przypadki;i++)
    {
       
   
    
        scanf("%d", &base);
        
        
        scanf("%d", &exponent);

        if (exponent == 0) {
        
            return 0;
        }

        base = base % 10;


        int last_digit;
        switch (base) {
            case 0:
                last_digit = 0;
                break;
            case 1:
                last_digit = 1;
                break;
            case 2:
                last_digit = (int[]){2, 4, 8, 6}[(exponent - 1) % 4];
                break;
            case 3:
                last_digit = (int[]){3, 9, 7, 1}[(exponent - 1) % 4];
                break;
            case 4:
                last_digit = (int[]){4, 6}[(exponent - 1) % 2];
                break;
            case 5:
                last_digit = 5;
                break;
            case 6:
                last_digit = 6;
                break;
            case 7:
                last_digit = (int[]){7, 9, 3, 1}[(exponent - 1) % 4];
                break;
            case 8:
                last_digit = (int[]){8, 4, 2, 6}[(exponent - 1) % 4];
                break;
            case 9:
                last_digit = (int[]){9, 1}[(exponent - 1) % 2];
                break;
            default:
                last_digit = -1; 
                break;
        }

        printf("%d\n", last_digit);
    }
    return 0;
}
