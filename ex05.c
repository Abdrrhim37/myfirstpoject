#include <stdio.h>

int main() {
    int heures, minutes, secondes;

    printf("Entrez l'heure (heures minutes secondes) : ");
    scanf("%d %d %d", &heures, &minutes, &secondes);

    secondes++;

    
    if (secondes >= 60) {
        secondes = 0;
        minutes++;
        
        if (minutes >= 60) {
            minutes = 0;
            heures++;
           
            if (heures >= 24) {
                heures = 0;
            }
        }
    }

    printf("L'heure suivante est : %02d:%02d:%02d\n", heures, minutes, secondes);

    return 0;
}
