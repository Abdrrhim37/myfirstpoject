#include <stdio.h>

int main() {
    float salaire_horaire, heures_travaillees, salaire_brut, retenue_ss, salaire_net;

    printf("Salaire horaire en DH : ");
    scanf("%f", &salaire_horaire);

    printf("Nombre d'heures travaillées : ");
    scanf("%f", &heures_travaillees);

    salaire_brut = salaire_horaire * heures_travaillees;

    
    retenue_ss = salaire_brut * 0.22;
    
    if (retenue_ss > 5000) {
        retenue_ss = 5000;
    }

   
    salaire_net = salaire_brut - retenue_ss;

    
    printf("\nSalaire brut : %.2f DH\n", salaire_brut);
    printf("Retenue de la sécurité sociale : %.2f DH\n", retenue_ss);
    printf("Salaire net : %.2f DH\n", salaire_net);

    return 0;
}