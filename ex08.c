#include <stdio.h>

int main() {
    int jour;

   
    printf("Entrez le rang du jour (entre 1 et 7) : ");
    scanf("%d", &jour);

   
    if (jour >= 1 && jour <= 7) {
        
        switch (jour) {
            case 1:
                printf("Lundi\n");
                break;
            case 2:
                printf("Mardi\n");
                break;
            case 3:
                printf("Mercredi\n");
                break;
            case 4:
                printf("Jeudi\n");
                break;
            case 5:
                printf("Vendredi\n");
                break;
            case 6:
                printf("Samedi\n");
                break;
            case 7:
                printf("Dimanche\n");
                break;
        }
    } else {
      
        printf("Erreur : le rang du jour doit être entre 1 et 7.\n");
    }

    return 0;
}
