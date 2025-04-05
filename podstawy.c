# include <stdio.h>

int main(int arg, char** agrv){

    if (__STDC_VERSION__ >=  201710L)
        printf("we are using c18!\n");
    else if (__STDC_VERSION__ >=  201112LL)
    {
         printf("we are using c11!\n");
    }
    else if (__STDC_VERSION__ >= 199901L)
        printf("We are using C99!\n");
    else
        printf("We are using C89/C90!\n");
    
    

    return 0;
}