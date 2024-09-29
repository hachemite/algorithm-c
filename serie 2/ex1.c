#include<stdio.h>

int main(){
    printf("ecrire les valeur positif  pour avoir une somme positif \necrire les valeur negatif  pour avoir une somme négatif \necrire 0 pour arreter ");
    int A,SP,SN;
    SP,SN=0;
    do{
        scanf("%d",&A);
        if(A>0) SP = SP+A;
        else SN= SN+A;

    }while(A!=0);

    printf("valeur de somme positive est %d, \t\t ,valeur de somme negative est   %d",SP,SN);
}
