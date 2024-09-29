#include<stdio.h>

int main(){
    int positif,ligne,colonne;


    printf("Entrez la taille du matrice : ");
    scanf("%d", &ligne);
    scanf("%d", &colonne);

    int matrice[ligne][colonne];

    printf("Entrez les éléments du matrice :\n");
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("Element %d,%d : ", i + 1,j+1);
            scanf("%d", &matrice[i][j]);
    }
    }
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            if(matrice[i][j]>0){
                    positif =1;
                    break;
            }
            if (positif) {
            break;
        }
    }
}
    if (positif ==0) printf("contient que des éléments négatif");
    else printf(" contient  des éléments positif");
}

