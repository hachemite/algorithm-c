#include <stdio.h>

int croissant(int *vecteur, int taille) {
    for (int i = 1; i < taille; i++) {
        if (*(vecteur + i - 1) > *(vecteur + i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int taille;


    printf("Entrez la taille du vecteur : ");
    scanf("%d", &taille);

    int vecteur[taille];

    printf("Entrez les éléments du vecteur :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", vecteur+i);
    }

    if (croissant(vecteur, taille)) {
        printf("Le vecteur est ordonné en ordre croissant.\n");
    } else {
        printf("Le vecteur n'est pas ordonné en ordre croissant.\n");
    }

    return 0;
}
