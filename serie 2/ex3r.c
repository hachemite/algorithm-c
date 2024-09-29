#include <stdio.h>

int main() {
    int notes[20];
    int countSup10 = 0;

    printf("Entrez 20 notes entières :\n");

    for (int i = 0; i < 20; ++i) {
        printf("Note %d : ", i + 1);
        scanf("%d", &notes[i]);
        if(notes[i] <0 || notes[i]> 20){
                printf("la valeur entre n'est pas acceptable si veut reecrire : ");
                i =i-1;
        }

        if (notes[i] > 10) {
            countSup10++;
        }
    }

    double pourcentageSup10 = (double)countSup10 / 20 * 100;

    printf("\nLe pourcentage de notes superieures à 10 est : %.2f%%\n", pourcentageSup10);

    return 0;
}
