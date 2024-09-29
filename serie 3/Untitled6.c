#include <stdio.h>

void calculerSommeCumulative(int tableau[], int taille) {
    // Initialiser le tableau de résultats avec la première valeur du tableau d'entrée
    int resultat[taille];
    resultat[0] = tableau[0];

    // Calculer la somme cumulative
    for (int i = 1; i < taille; i++) {
        resultat[i] = resultat[i - 1] + tableau[i];
    }

    // Afficher le tableau d'origine
    printf("Tableau d'origine : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }

    // Afficher le tableau des sommes cumulatives
    printf("\nSomme cumulative : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", resultat[i]);
    }
    printf("\n");
}

int main() {
    int N;
    int b;
    do{
        printf("Entrez l : ");
        scanf("%d",&b);
    }while(b==0);
    // Demander à l'utilisateur la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &N);

    // Déclarer un tableau d'entiers de taille N
    int tableau[N];

    // Demander à l'utilisateur de remplir le tableau
    printf("Remplissez le tableau avec %d entiers :\n", N);
    for (int i = 0; i < N; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Appeler la fonction pour calculer la somme cumulative et afficher les résultats
    calculerSommeCumulative(tableau, N);

    return 0;
}
