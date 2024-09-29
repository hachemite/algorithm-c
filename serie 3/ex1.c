#include<stdio.h>

int main(){

    float var1,var2;
    float *ptr1,*ptr2;

    ptr1 = &var1;
    ptr2 = &var2;

    *ptr1 = 12.5;
    *ptr2 = 5.76;

    printf("avant l'échager");
    printf("Valeur via pointeur1 : %f\n", *ptr1);
    printf("Valeur via pointeur2 : %f\n", *ptr2);

    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("aprés l'échager");
    printf("Valeur via pointeur1 : %f\n ", *ptr1);
    printf("Valeur via pointeur2 : %f\n ", *ptr2);
}
