#include<stdio.h>

int main() {
    double nbr, nf = 1.0;
    int pow,i;

    printf("Entrez la valeur de x : ");
    scanf("%lf", &nbr);

    printf("Entrez la valeur de n : ");
    scanf("%d", &pow);

    while(i<pow){
        i++;
        nf = nbr * nf;

    }

    printf("La moyenne des valeurs : %f\n", nf);

    return 0;
}
