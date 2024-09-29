#include <stdio.h>
int somme=0;



int SOMME(int x, int y) {
    x = 20;
    y =10;
    return x+y ;
}

int main() {
    int a=0;
    int b=0;
    int z;
    printf("\n%d_%d",a,b);

    a = SOMME(a,b);
    printf("\n %d_%d",a,b);
}
