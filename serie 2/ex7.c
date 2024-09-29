#include <stdio.h>

int pgcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int entier1, entier2;

    printf("Entrez le premier entier naturel : ");
    scanf("%d", &entier1);

    printf("Entrez le deuxième entier naturel : ");
    scanf("%d", &entier2);

    int resultat = pgcd(entier1, entier2);

    printf("Le PGCD de %d et %d est : %d\n", entier1, entier2, resultat);

    return 0;
}
