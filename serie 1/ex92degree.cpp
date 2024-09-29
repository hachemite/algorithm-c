#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    printf("entrer les valeurs de a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==0)
    {
        if(b==0)
        {
            if(c==0)     printf("tout nombre reel est une solution de l'equation\n");
            else         printf("absurde\n");
        }
        else             printf("l'equation admet une seule solution:%f\n",(float)-c/b);
    }
     else
    { d=pow(b,2)-4*a*c;
        if(d>0)          printf("l'equation a deux solutions:%f %f\n",(float)(-b-sqrt(d))/(2*a),(float)(-b+sqrt(d))/(2*a));
        else if(d==0)    printf("l'equation admet une seule solution:%f\n",(float)-b/2*a);
              else       printf("l'equation n'a pas de solution\n");
    }
return 0;
}

