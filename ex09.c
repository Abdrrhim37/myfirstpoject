#include <stdio.h>

int main() {
    int A, B, resultat;
    char operateur;

  
    printf("Entrez le premier entier (A) : ");
    scanf("%d", &A);
    printf("Entrez le deuxième entier (B) : ");
    scanf("%d", &B);
    printf("Entrez l'opérateur (+, -, *, /) : ");
    scanf(" %c", &operateur); 
  
    switch (operateur) {
        case '+':
            resultat = A + B;
            break;
        case '-':
            resultat = A - B;
            break;
        case '*':
            resultat = A * B;
            break;
        case '/':
            if (B != 0) {
                resultat = A / B;
            } else {
                printf("Erreur : Division par zéro.\n");
                return 1; 
            }
            break;
        default:
            printf("Erreur : Opérateur invalide.\n");
            return 1; 
    }

    
    printf("Résultat : %d %c %d = %d\n", A, operateur, B, resultat);

    return 0;
}
