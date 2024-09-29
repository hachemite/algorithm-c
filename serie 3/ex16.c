#include <stdio.h>

float calculExpressionQuadratique(float a, float b, float c, float x) {
    float resultat = a * x * x + b * x + c;
    return resultat;
}

int main() {
    float a, b, c, x;

    printf("Entrez la valeur de a : ");
    scanf("%f", &a);

    printf("Entrez la valeur de b : ");
    scanf("%f", &b);

    printf("Entrez la valeur de c : ");
    scanf("%f", &c);

    printf("Entrez la valeur de x : ");
    scanf("%f", &x);

    float resultat = calculExpressionQuadratique(a, b, c, x);
    printf("Le résultat de l'expression est : %.2f\n", resultat);

    return 0;
}
