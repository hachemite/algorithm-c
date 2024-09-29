#include<stdio.h>

int main(){

    float var1,var2,somme;
    float *ptr1,*ptr2;


    ptr1 = &var1;
    ptr2 = &var2;
    printf("écrire la valeur de deux variable");
    scanf("%f",ptr1);
    scanf("%f",ptr2);

    somme = *ptr1 + *ptr2;

    printf("aprés l'échager");
    printf("Valeur via pointeur1 : %f\n ", *ptr1);
    printf("Valeur via pointeur2 : %f\n ", *ptr2);
    printf("la valeur de somme %f",somme);
}
