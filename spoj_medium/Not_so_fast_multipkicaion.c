#include <stdio.h>
#include <math.h>

int multiplication_karatsuba(int a, int b) {
    if (a < 10 || b < 10) {
        return a * b; // Base case for recursion
    }

    int pom_a = 0, pom_b = 0;
    int a1 = a, b1 = b;

    // Find the number of digits in a and b
    while (a1 != 0) {
        a1 /= 10;
        pom_a++;
    }
    while (b1 != 0) {
        b1 /= 10;
        pom_b++;
    }

    // Find the smaller number of digits
    int dl = (pom_a < pom_b) ? pom_a : pom_b;
    int s = dl / 2;

    int podzial = (int)pow(10, s);

    int a_lewa = a / podzial;
    int a_prawa = a % podzial;
    int b_lewa = b / podzial;
    int b_prawa = b % podzial;

    int p1 = multiplication_karatsuba(a_lewa, b_lewa);
    int p2 = multiplication_karatsuba(a_prawa, b_prawa);
    int p3 = multiplication_karatsuba(a_lewa + a_prawa, b_lewa + b_prawa);

    return (p1 * podzial * podzial) + ((p3 - p1 - p2) * podzial) + p2;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int l1, l2;
        scanf("%d %d", &l1, &l2);
        printf("%d\n", multiplication_karatsuba(l1, l2));
    }
    return 0;
}
