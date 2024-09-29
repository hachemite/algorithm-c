#include <stdio.h>

int SOMME_TAB(int TAB[], int N) {
    int somme = 0;

    for (int i = 0; i < N; i++) {
        somme += TAB[i];
    }

    return somme;
}

int main() {
    int N;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &N);

    int tableau[N];

    printf("Saisir les elements du tableau :\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int somme = SOMME_TAB(tableau, N);

    printf("La somme des elements du tableau est : %d\n", somme);

    return 0;
}
