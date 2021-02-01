#include <stdio.h>

int binarieToDecimal(int n, int base);

int main()
{
  int num, result;

  printf("\n<ENTER> a number.: ");
  scanf("%d", &num);
  result = binarieToDecimal(num, 1);

  printf("\n%d = %d\n", num, result);

  return 0;
}

int binarieToDecimal(int n, int base)
{
  if (!n)
    return 0;
  return binarieToDecimal(n / 10, base * 2) + (n % 10) * base;
}
