#include<stdio.h>

int main(void){
    int tab[10];
    int i,max,min;
    min=100000000000;

    for(i,max=0;i<10;i++){
        printf("les valeur de tableau \t %d ",i+1);
        scanf("%d",&tab[i]);
        if(tab[i]>max){
            max = tab[i];
        }
        else if(tab[i]<min){
            min =tab[i];
        }
        }

    for(i=0;i<10;i++){
        printf("%d\t",tab[i]);

    }
    printf("\n%d   %d",max,min);

}

