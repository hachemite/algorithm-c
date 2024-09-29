#include<stdio.h>
#include<math.h>

float a,b,c,max;
int main(){
printf ("Entrer le nobre");

scanf("%f%f%f",&a,&b,&c);
if(a>c&&a>b)  max = a;

else
    if(b>c) max = b;

    else max= c;


printf("le max est %f",max);
}
