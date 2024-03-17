#include <stdio.h>

int main() {
    int secondes, heures, minutes, reste_secondes;

    
    printf("Entrez le nombre de secondes : ");
    scanf("%d", &secondes);

    
    heures = secondes / 3600;
    
    reste_secondes = secondes % 3600;
 
    minutes = reste_secondes / 60;

    secondes = reste_secondes % 60;

  
    printf("Cela équivaut à : %d heures, %d minutes et %d secondes.\n", heures, minutes, secondes);

    return 0;
}
