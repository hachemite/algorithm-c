#include <stdio.h>

int trouverIndiceMax(int tableau[], int taille) {
    int indiceMax = 0;

    for (int i = 1; i < taille; i++) {
        if (tableau[i] > tableau[indiceMax]) {
            indiceMax = i;
        }
    }

    return indiceMax;
}

int main() {
    int N;


    printf("Entrez la taille du tableau : ");
    scanf("%d", &N);

    int tableau[N];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int indiceMax = trouverIndiceMax(tableau, N);

    printf("Le plus grand element se trouve a la position : %d\n", indiceMax);
    printf("La valeur du plus grand element est : %d\n", tableau[indiceMax]);

    return 0;
}
