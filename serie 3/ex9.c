#include <stdio.h>

void transfertMatriceVersTableau(int M[10][10], int V[], int lignes, int colonnes) {
    int k = 0;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            V[k++] = M[i][j];
    }
}
}
void afficherTableau(int tableau[], int taille) {
    printf("Tableau : {");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("}\n");
}

int main() {
    int M[10][10];
    int V[10 * 10];

    int lignes, colonnes;

    printf("Entrez le nombre de lignes (max 10) : ");
    scanf("%d", &lignes);

    printf("Entrez le nombre de colonnes (max 10) : ");
    scanf("%d", &colonnes);

    printf("Entrez les elements de la matrice (%d x %d) :\n", lignes, colonnes);
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Element [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    transfertMatriceVersTableau(M, V, lignes, colonnes);

    afficherTableau(V, lignes * colonnes);


}
