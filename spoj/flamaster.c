#include <stdio.h>
#include <string.h>

int main() {
    int C;
    scanf("%d", &C);
    getchar(); 

    for (int i = 0; i < C; i++) 
    {
        char line[201]; 
        fgets(line, sizeof(line), stdin);
        
        size_t length = strlen(line);
        if (length > 0 && line[length - 1] == '\n') {
            line[length - 1] = '\0';
            length--;
        }
        
        int count = 1;
        for (int j = 0; j < length; j++) 
        {
            if (line[j] == line[j + 1]) 
            {
                count++;
            } 
            else 
            {
                if (count > 2) 
                {
                    printf("%c%d", line[j], count);
                } 
                else 
                {
                    for (int k = 0; k < count; k++) 
                    {
                        printf("%c", line[j]);
                    }
                }
                count = 1;
            }
        }
        printf("\n"); 
    }

    return 0;
}
