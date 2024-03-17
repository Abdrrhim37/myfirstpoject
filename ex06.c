#include <stdio.h>

int main() {
    int nombre;

 
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

  
    if (nombre == 0) {
        printf("Le nombre est nul.\n");
    } else if (nombre % 2 == 0) {
        printf("Le nombre est pair.\n");
    } else {
        printf("Le nombre est impair.\n");
    }

    return 0;
}
