#include <stdio.h>

int main() {
    int dividende, diviseur, quotient = 0, reste;

    // Saisie des entiers au clavier
    printf("Entrez le dividende : ");
    scanf("%d", &dividende);

    printf("Entrez le diviseur : ");
    scanf("%d", &diviseur);

    // V�rification que le diviseur est diff�rent de z�ro
    while (diviseur == 0) {
        printf("Erreur : Le diviseur ne peut pas �tre z�ro. Entrez une nouvelle valeur pour le diviseur : ");
        scanf("%d", &diviseur);
    }

    // Calcul du quotient et du reste par des soustractions successives
    while (dividende >= diviseur) {
        dividende -= diviseur;
        quotient++;
    }

    reste = dividende;

    // Affichage du r�sultat
    printf("Quotient : %d\n", quotient);
    printf("Reste : %d\n", reste);

    return 0;
}
