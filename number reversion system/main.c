#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef union 
{
    int intValue;
    float floatValue;
    char charValue;
} MixedUnion;

// Function to convert a decimal number to binary
void decToOther(int in, int num) 
{
    MixedUnion numToNum[128];
    int index = 0;
		if(num == 16)
		{
			while (in > 0) 
			{
        		int remainder = in % num;
        			if (remainder < 10) 
					{
            			numToNum[index].charValue = '0' + remainder; // Convert to ASCII '0'-'9'
       				} 
					else 
					{
            			numToNum[index].charValue = 'A' + (remainder - 10); // Convert to ASCII 'A'-'F'
        			}
				in /= num;
				index++;
				
			}
			for (int i = index - 1; i >= 0; i--) 
			{
				printf("%c", numToNum[i].charValue);
			}
			printf("\n");
		}
		else
		{
			// Convert the number to binary
			while (in > 0) 
			{
				numToNum[index].intValue = in % num;
				in /= num;
				index++;
			}

			// Print the binary number in reverse order
			
			for (int i = index - 1; i >= 0; i--) 
			{
				printf("%d", numToNum[i].intValue);
			}
			printf("\n");
		}
}

int OtherToDec(int n,int num)
{
	int out=0;
	if(num == 16)
	{
		
	}
	else
	{
	
	int power=1;
		while(n != 0)
		{
			int pom;
			pom = n%10;
			n /= 10;
			out = out + power*pom;
			power *= num;
		}
	printf("%d", out);
	}
	return out;
}
void BinToOctaHecta(int n, int num)
{
    MixedUnion tab[128];
    int index = 0;
	int sum = 0;
	int power = 1;
		if(num == 16)
		{
			while (n != 0) 
			{
				
				int pom = n % 10000;  // Process the last three digits (binary)
					while (pom != 0) 
					{
						int lastDigit = pom % 10;  // Get the last binary digit
						sum += power * lastDigit;   // Convert binary to decimal
						power *= 2;                 // Move to the next power of 2
						pom /= 10;                  // Move to the next digit in binary
					}

					if (sum < 10) 
					{
            			tab[index].charValue = '0' + sum; // Convert to ASCII '0'-'9'
       				} 
					else 
					{
            			tab[index].charValue = 'A' + (sum - 10); // Convert to ASCII 'A'-'F'
        			}  // Store the converted value
				n /= 10000;  // Move to the next group of three binary digits
				index++;
			}

			// Print the result in reverse order (to get the correct octal/hexadecimal representation)
			for (int i = index - 1; i >= 0; i--)
			{
				printf("%c", tab[i].charValue);  // %X prints the number in hexadecimal (capital letters)
			}
			printf("\n");
		}
		else
		{
			while (n != 0) 
			{
				
				int pom = n % 1000;  // Process the last three digits (binary)
					while (pom != 0) 
					{
						int lastDigit = pom % 10;  // Get the last binary digit
						sum += power * lastDigit;   // Convert binary to decimal
						power *= 2;                 // Move to the next power of 2
						pom /= 10;                  // Move to the next digit in binary
					}

				tab[index].intValue = sum;  // Store the converted value
				n /= 1000;  // Move to the next group of three binary digits
				index++;
			}

			// Print the result in reverse order (to get the correct octal/hexadecimal representation)
			for (int i = index - 1; i >= 0; i--)
			{
				printf("%X", tab[i].intValue);  // %X prints the number in hexadecimal (capital letters)
			}
			printf("\n");
		}

	}
void OctaHexaToBin(int n, int num)
{
	int j =0;
	MixedUnion tab_num[128];
	if(num == 8)
	{
	int current_digit = 0;
	
		while(n != 0)
		{
			current_digit = n % 10;
			
				for(int i=0; i<3 ;i++)
				{
					tab_num[j].intValue = current_digit % 2;
					current_digit /= 2;
					j++;
				}
			n /= 10;
		}
	}
	for (int i = j - 1; i >= 0; i--)
	{
		printf("%X", tab_num[i].intValue);  
	}
	printf("\n");

}
int HexaToDecimal(char hex[])
{
	int power;
	int len = strlen(hex);
	int out = 0;
		for(int i = len - 1;i >= 0;--i)
		{
			if(hex[i] >= '0' && hex[i] < 9)
			{
				out  += (hex[i] - 48) * power;
				power *= 16;
			}
			else if(hex[i] >= 'A' && hex[i] <= 'F') 
			{
				out  += (hex[i] - 55) * power;
				power *= 16;
			}
			else if(hex[i] >= 'a' && hex[i] <= 'f')
			{
				out  += (hex[i] - 87) * power;
				power *= 16;
			}
		}
	return out;
}

		
int main()
{
    printf("SYSTEM NUMBER CONVERSION\n");
    int choice_first;
    
    printf("Choose current type:\n");
    printf("1: Decimal\n");
	printf("2: Binary\n");
	printf("3: Octadecimal\n");
	printf("4: hexadecimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice_first);

	int choice_second;

	system("cls");
	
	

    if (choice_first == 1) {
        printf("Choose conversion result\n");
		printf("1: Binary\n");
		printf("2: Octadecimal\n");
		printf("3: hexadecimal\n");
    	printf("Enter your choice: ");
    	scanf("%d", &choice_second);
		int n;
        printf("Enter a decimal number: ");
        scanf("%d", &n);
			if(choice_second == 1)
			{
				printf("Binary: ");
				decToOther(n,2);
			}
			else if(choice_second == 2)
			{
				printf("Octa: ");
				decToOther(n,8);
			}
			else if(choice_second == 3)
			{
				printf("Hexa: ");
				decToOther(n,16);
			}
			
    }
	if(choice_first == 2)
	{
		printf("Choose conversion result\n");
		printf("1: Decimal\n");
		printf("2: Octadecimal\n");
		printf("3: hexadecimal\n");
    	printf("Enter your choice: ");
    	scanf("%d", &choice_second);
		int n;
        printf("Enter a binar number: ");
        scanf("%d", &n);
			if(choice_second == 1)
			{
				printf("Binary: ");
				OtherToDec(n, 2);
			}
			else if(choice_second == 2)
			{
				printf("Octa: ");
				BinToOctaHecta(n,2);
				
			}
			else if(choice_second == 3)
			{
				printf("Hexa: ");
				BinToOctaHecta(n,16);
				
			}
			
    }
	if(choice_first == 3)
	{
		printf("Choose conversion result\n");
		printf("1: Decimal\n");
		printf("2: binary\n");
		printf("3: hexadecimal\n");
    	printf("Enter your choice: ");
    	scanf("%d", &choice_second);
		int n;
        printf("Enter a octa number: ");
        scanf("%d", &n);
			if(choice_second == 1)
			{
				printf("decimal: ");
				OtherToDec(n,8);
			}
			if(choice_second == 2)
			{
				printf("binary: ");
				OctaHexaToBin(n,8);
				
			}
			if(choice_second == 3)
			{
				int pom = 0;
				printf("Hexadecimal: ");
				pom = OtherToDec(n,8);
				decToOther(pom, 16);

			}

	}
	if(choice_first == 4)
	{
		printf("Choose conversion result\n");
		printf("1: Decimal\n");
		printf("2: binary\n");
		printf("3: octadecimal\n");
    	printf("Enter your choice: ");
    	scanf("%d", &choice_second);
		char n[128];
        printf("Enter a hexa number: ");
        scanf("%s", &n);
			if(choice_second == 1)
			{
				printf("Decinmal: ");
				OtherToDec(n,16);
			}
			if(choice_second == 2)
			{
				printf("Binary: ");

			}
			if(choice_second == 3)
			{
				printf("Octa: ");
				
			}

	}

    return 0;
}
