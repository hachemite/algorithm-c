#include <stdio.h>

int main() {
    float prixNet, tauxTVA, prixTTC;

    // Saisie du prix net
    printf("Entrez le prix net de l'article : ");
    scanf("%f", &prixNet);

    // Saisie du taux de TVA en pourcentage
    printf("Entrez le taux de TVA (en pourcentage) : ");
    scanf("%f", &tauxTVA);

    // Calcul du prix TTC
    prixTTC = prixNet * (1 + tauxTVA / 100);

    // Affichage du résultat
    printf("Le prix TTC de l'article est : %.2f\n", prixTTC);

    return 0;
}
