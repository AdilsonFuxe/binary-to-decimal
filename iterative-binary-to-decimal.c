#include <stdio.h>

int binarieToDecimal(int n);

int main()
{
  int num, result;

  printf("\n<ENTER> a number.: ");
  scanf("%d", &num);
  result = binarieToDecimal(num);

  printf("\n%d = %d\n", num, result);

  return 0;
}

int binarieToDecimal(int n)
{
  int base = 1, part = 0, result = 0;
  while (n)
  {
    part = n % 10;
    n /= 10;
    result = result + part * base;
    base *= 2;
  }
  return result;
}