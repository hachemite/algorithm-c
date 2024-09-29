#include<stdio.h>


int main(){
    int nbr,somme,count,moyen;
    somme,count=0;
    printf("ecrire les nobre pour faire avoir le moyenne \necrire -1 pour arreter\n");
    do{

        scanf("%d",&nbr);
        if(nbr>=0){
            somme=somme+nbr;
            count++;
        }
        else{
            printf("Veuillez entrer un entier positif ou -1 pour terminer.\n");
        }
    }while(nbr !=-1);

    double moyenne = (double)somme / count;
    printf("la moyyen des valeurs %.2f",moyenne);
}
