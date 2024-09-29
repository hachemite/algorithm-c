#include<stdio.h>
#include<math.h>

int main(){
printf(" x|");
for(int i =1;i<10;i++) {
    printf("\t%d",i);
}
printf("\n_____________________________________________________________________________________________\n");
for(int i =1;i<10;i++){
        printf("\n %d|",i);

    for(int j =1;j<10;j++){

        printf("\t%d",i*j);
    }
}

}
