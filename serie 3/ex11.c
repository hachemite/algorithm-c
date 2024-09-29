#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];

    printf("Entrez un nom : ");
    scanf("%s", nom);

    printf("Nom avec signe - : ");
    for (int i = 0; i < strlen(nom); i++) {
        printf("%c", nom[i]);
        if (i < strlen(nom) - 1) {
            printf("-");
        }
    }

    return 0;
}
