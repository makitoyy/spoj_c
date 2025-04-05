#include <stdio.h>
#include <stdbool.h>

void count_digits(int number, int count[10]) 
{
    for (int i = 0; i < 10; i++)
     {
        count[i] = 0;
    }
    
    while (number > 0) 
    {
        int digit = number % 10;
        count[digit]++;
        number /= 10;
    }
}

bool same_digits(int num1, int num2) 
{
    int count1[10];
    int count2[10];

    count_digits(num1, count1);
    count_digits(num2, count2);

    for (int i = 0; i < 10; i++) 
    {
        if (count1[i] != count2[i]) 
        {
            return false;
        }
    }
    
    return true;
}

int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (same_digits(num1, num2)) 
    {
        printf("The numbers %d and %d are made up of the same digits.\n", num1, num2);
    } 
    else 
    {
        printf("The numbers %d and %d are NOT made up of the same digits.\n", num1, num2);
    }

    return 0;
}
