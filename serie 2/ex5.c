#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, racine1, racine2;
    printf("Entrez le coefficient a : ");
    scanf("%lf", &a);
    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);
    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        racine1 = (-b + sqrt(delta)) / (2 * a);
        racine2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les solutions sont réelles et distinctes : %.2f et %.2f\n", racine1, racine2);
    } else if (delta == 0) {

        racine1 = -b / (2 * a);
        printf("La solution est réelle et double : %.2f\n", racine1);
    } else {
        double PartiReel = -b / (2 * a);
        double Partimaginaire = sqrt(-delta) / (2 * a);
        printf("Les solutions sont imaginaires : %.2f + %.2fi et %.2f - %.2fi\n", PartiReel, Partimaginaire, PartiReel, Partimaginaire);
    }

    return 0;
}
