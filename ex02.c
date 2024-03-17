#include <stdio.h>
#include <math.h>

void solve_quadratic(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imaginaryPart;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Deux solutions réelles : %.2f et %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Une solution réelle : %.2f\n", root1);
    }
    // Cas où il y a deux solutions complexes
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
        printf("Deux solutions complexes : %.2f + %.2fi et %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;

    printf("Entrez la valeur de a : ");
    scanf("%lf", &a);
    printf("Entrez la valeur de b : ");
    scanf("%lf", &b);
    printf("Entrez la valeur de c : ");
    scanf("%lf", &c);

    
    solve_quadratic(a, b, c);

    return 0;
}
