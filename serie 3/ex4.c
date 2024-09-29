#include <stdio.h>

void triCroissant(int vecteur[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (vecteur[j] > vecteur[j + 1]) {
                int temp = vecteur[j];
                vecteur[j] = vecteur[j + 1];
                vecteur[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vecteurOriginal[] = {3, 6, 1, 9, 2, 5};
    int taille = 6;

    int vecteurCroissant[taille];
    for (int i = 0; i < taille; i++) {
        vecteurCroissant[i] = vecteurOriginal[i];
    }

    triCroissant(vecteurCroissant, taille);

    printf("Vecteur original : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", vecteurOriginal[i]);
    }

    printf("\nVecteur trié (croissant) : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", vecteurCroissant[i]);
    }


}
