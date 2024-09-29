#include <stdio.h>
int main() {
int notes;
int countSup10 = 0;

    for(int i = 1; i <=20;++i) {
    do{
        printf("Entrez 20 notes entier i=%d:\n",i);
        scanf("%d", &notes);
    }while(notes <0 || notes> 20);

    if (notes > 10) {
        countSup10++;
    }
}
double pourcentageSup10 = (double)countSup10 / 20 * 100;
printf("\nLe pourcentage de notes superieures est : %.2f%%\n",
pourcentageSup10);
}


