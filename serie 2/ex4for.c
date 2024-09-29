#include<stdio.h>

int main() {
    double nbr, nf = 1.0;
    int pow;

    printf("Entrez la valeur de x : ");
    scanf("%lf", &nbr);

    printf("Entrez la valeur de n : ");
    scanf("%d", &pow);

    for (int i = 0; i < pow; i++) {
        nf = nbr * nf;
        printf("%f   %f\n", nf, nbr);
    }

    printf("La moyenne des valeurs : %f\n", nf);

    return 0;
}
