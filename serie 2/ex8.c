#include<stdio.h>

int main(){
    int nbr,nbrcopie,nbrchiffre=0;

    printf("entrer le nombre:");
    scanf("%d",&nbr);
    nbrcopie = nbr;

    do{
        nbrchiffre++;
        nbr /= 10;

    }while(nbr !=0);

    printf("le nombre de chiffre entier %d est %d",nbrcopie,nbrchiffre);
}
