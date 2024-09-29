#include<stdio.h>

int main() {
    double nf = 0.0;
    int n;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        nf = nf + 1.0 / (i + 1);
        printf("%lf   %d\n", nf, i+1);
    }

    printf("La valeur de la série harmonique : %lf\n", nf);

    return 0;
}
