#include <stdio.h>

int main() {
    int dividende, diviseur, quotient = 0, reste;

    // Saisie des entiers au clavier
    printf("Entrez le dividende : ");
    scanf("%d", &dividende);

    printf("Entrez le diviseur : ");
    scanf("%d", &diviseur);

    // Vérification que le diviseur est différent de zéro
    while (diviseur == 0) {
        printf("Erreur : Le diviseur ne peut pas être zéro. Entrez une nouvelle valeur pour le diviseur : ");
        scanf("%d", &diviseur);
    }

    // Calcul du quotient et du reste par des soustractions successives
    while (dividende >= diviseur) {
        dividende -= diviseur;
        quotient++;
    }

    reste = dividende;

    // Affichage du résultat
    printf("Quotient : %d\n", quotient);
    printf("Reste : %d\n", reste);

    return 0;
}
