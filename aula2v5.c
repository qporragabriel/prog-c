#include <stdio.h>

int main()
{
  int x;
  int y;
  int soma;
  int sub;
  int mult;
  int div;
  
  printf("\nEntre com o valor de x:");
  scanf("%d", &x);
  
  printf("\nEntre com o valor de y:");
  scanf("%d", &y);
  
  soma = x + y;
  sub = x - y;
  mult = x * y;
  div = (float)x / y;
    
  printf("\nResultado da soma=%d\n", soma);
  printf("\nResultado da sub=%d\n", sub);
  printf("\nResultado da mult=%d\n", mult);
  printf("\nResultado da div=%d\n", div);
  
  return 0;
}