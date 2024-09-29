#include<stdio.h>
int main()
{
	int i,N,NOMB,S=0,P=1;
	float M;
	printf("Combien de nombres? ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("saisir le %d nombre:",i);
		scanf("%d",&NOMB);
		S+=NOMB;
		P*=NOMB;
	}
	printf("la somme est:%d\n",S);
	printf("le produit est:%d\n",P);
	printf("la moyenne est:%f\n",M=S/N);
	return 0;
}
