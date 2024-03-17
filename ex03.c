#include <stdio.h>
int pgcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int ppcm(int a, int b) {
    return (a * b) / pgcd(a, b);
}

int main() {
    int num1, num2;

  
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);
    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2);

   
    int gcd = pgcd(num1, num2);
    int lcm = ppcm(num1, num2);

    
    printf("Le PGCD de %d et %d est : %d\n", num1, num2, gcd);
    printf("Le PPCM de %d et %d est : %d\n", num1, num2, lcm);

    return 0;
}
