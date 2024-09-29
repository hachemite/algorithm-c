#include <stdio.h>

int main() {
    int nombreEtudiants, i;
    float mathematique, programmationC, algorithme, TEC, moyenneGenerale;

    printf("Entrez le nombre d'etudiants dans la classe : ");
    scanf("%d", &nombreEtudiants);

    for (i = 0; i < nombreEtudiants; ++i) {
        printf("\nEtudiant %d\n", i + 1);

        // Saisie des notes dans la plage de 0 à 20
        do {
            printf("Note en mathematique (entre 0 et 20) : ");
            scanf("%f", &mathematique);
        } while (mathematique < 0 || mathematique > 20);

        do {
            printf("Note en programmation C (entre 0 et 20) : ");
            scanf("%f", &programmationC);
        } while (programmationC < 0 || programmationC > 20);

        do {
            printf("Note en algorithme (entre 0 et 20) : ");
            scanf("%f", &algorithme);
        } while (algorithme < 0 || algorithme > 20);

        do {
            printf("Note en TEC (entre 0 et 20) : ");
            scanf("%f", &TEC);
        } while (TEC < 0 || TEC > 20);

        // Calcul de la moyenne générale pondérée
        moyenneGenerale = (5 * mathematique + 6 * programmationC + 4 * algorithme + 5 * TEC) / 20;

        // Affichage de la moyenne générale
        printf("Moyenne generale : %.2f\n", moyenneGenerale);

        // Affichage de la mention
        if (moyenneGenerale >= 16) {
            printf("Mention : Excellent\n");
        } else if (moyenneGenerale >= 14) {
            printf("Mention : Tres Bien\n");
        } else if (moyenneGenerale >= 12) {
            printf("Mention : Bien\n");
        } else if (moyenneGenerale >= 10) {
            printf("Mention : Assez Bien\n");
        } else {
            printf("Mention : Insuffisant\n");
        }
    }

    return 0;
}
