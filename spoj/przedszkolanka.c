#include <stdio.h>


int nwd(int a, int b) {
    int pom;
    while (b != 0) {
        pom = b;
        b = a % b;
        a = pom;
    }
    return a;
}

int main() {
    int przypadki;
    scanf("%d", &przypadki);
    
    for (int i = 0; i < przypadki; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", (a * b) / nwd(a, b));
    }
    
    return 0;
}
