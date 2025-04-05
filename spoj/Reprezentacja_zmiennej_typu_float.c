#include <stdio.h>
#include <stdint.h>

void printfloat(float number) {
    
        uint8_t* bytes = (uint8_t*)&number;
        
        for (int i = 3; i >= 0; i--)
        {
            printf("%x ", bytes[i]);
            if(i > 0)
            {
                printf(" ");
            }
        }
        printf("\n");
     
       
}

int main() 
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        float input;
        scanf("%f", &input);
        printfloat(input);
    }

    return 0;
}
