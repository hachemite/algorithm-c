#include<stdio.h>
int main()
{
	int i=1,N,NOMB,S=0,P=1;
	float M;
	printf("Combien de nombres? ");
	scanf("%d",&N);
	do
	{
		printf("saisir le %d nombre:",i);
		scanf("%d",&NOMB);
		S+=NOMB;
		P*=NOMB;
		i++;
	}
	while(i<=N);
	printf("la somme est:%d\n",S);
	printf("le produit est:%d\n",P);
	printf("la moyenne est:%f\n",M=(float)S/N);
	return 0;
}
