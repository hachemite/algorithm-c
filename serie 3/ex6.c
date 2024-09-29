#include<stdio.h>

int main(){
    int zero,ligne,colonne;


    printf("Entrez la taille du vecteur : ");
    scanf("%d", &ligne);
    scanf("%d", &colonne);

    int matrice[ligne][colonne];

    printf("Entrez les éléments du vecteur :\n");
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("Element %d,%d : ", i + 1,j+1);
            scanf("%d", &matrice[i][j]);
    }
    }
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            if(matrice[i][j]==0){
                    zero =1;
                    break;
            }
    }
}
    if (zero ==0) printf("pas de zero dans la matrice");
    else printf(" zero dans la matrice");
}
