#include <stdio.h>

long factorial(int n)
{
  int i;
  long fact = 1;

  for (i = 1; i <= n; i++)
    fact = fact * i;

  return fact;
}

int main()
{
  int nbr;

  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);

  printf("%d! = %ld\n", nbr, factorial(nbr));

  return 0;
}
