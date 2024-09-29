#include <stdio.h>

float produitScalaire(int vecteur1[], int vecteur2[], int taille) {
    float resultat = 0;

    for (int i = 0; i < taille; i++) {
        resultat += vecteur1[i] * vecteur2[i];
    }

    return resultat;
}

int main() {
    int taille;

    printf("Entrez la taille des vecteurs : ");
    scanf("%d", &taille);

    int vecteur1[taille], vecteur2[taille];

    printf("Saisir les elements du premier vecteur :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &vecteur1[i]);
    }

    printf("Saisir les elements du deuxième vecteur :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &vecteur2[i]);
    }

    float resultat = produitScalaire(vecteur1, vecteur2, taille);

    printf("Le produit scalaire des vecteurs est : %.2f\n", resultat);

    return 0;
}
