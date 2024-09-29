#include <stdio.h>
#include <string.h>

char nommod[100];

// La fonction signe doit prendre une chaîne de caractères en paramètre
char* signe(char nom[]) {
    // Utilisez une seule boucle
    int j = 0;
    for (int i = 0; i < strlen(nom) * 2; i++) {
        if (i % 2 == 0) {
            nommod[i] = nom[i];
        } else {
            nommod[i] = '-';
              // Avancez seulement lorsque vous avez pris un caractère du nom
        }
    }
    nommod[strlen(nom) * 2 - 1] = '\0';  // Ajoutez le caractère de fin de chaîne
    return nommod;
}

int main() {
    char nom[50];

    printf("Entrez un nom : ");
    scanf("%s", nom);

    printf("Nom avec signe - %s\n", signe(nom));

    return 0;
}
