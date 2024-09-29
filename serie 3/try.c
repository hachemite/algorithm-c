#include <stdio.h>
int somme=0;

void afficherTableau(int *tableau, int taille) {

    printf("Tableau : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", *tableau+i);
    }
    printf("\n");
}

int trie(int *tableau,int taille){
    int temp;
    for(int i=0;i<taille-1;i++){
        for(int j=0;j<taille-i-1;j++){
            if(*(tableau+j)>*(tableau+j+1)){
                temp = *(tableau+j);
                *(tableau+j) = *(tableau+j+1);
                *(tableau+j+1) = temp;
            }
        }
    }

}
int FUS_TRIE(int *tableau1, int taille1,int *tableau2 ,int taille2,int *tableau3) {

    for (int i = 0; i < taille1; i++) {

        *(tableau3+i) = *(tableau1+i);

    }
    for(int i = 0;i<taille1+taille2;i++){
        *(tableau3+taille1+i) = *(tableau2+i);
    }

    trie(tableau3,taille1 + taille2);
}


int main() {
    int N;
    int M;


    printf("Entrez la taille du vecteur : ");
    scanf("%d", &N);
    scanf("%d", &M);


    int A[N];
    int B[M];
    int FUS[N+M] ;

    printf("Entrez les éléments du vecteur :\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", A+i);
    }
    for (int i = 0; i < M; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", B+i);
    }
    afficherTableau(A,N);
    afficherTableau(B,M);
    afficherTableau(B,M);
    FUS_TRIE(A,N,B,M,FUS);
    afficherTableau(FUS,M+N);



    return 0;
}
