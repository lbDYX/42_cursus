int ft_isascii(int c)
{
  if (c >= 0 && c <= 177)
    return (1);
  else
    return (0);
}

#include<stdio.h>
int main (void)
{
  char c;

  c = 'H';
  if (ft_isascii(10))
    printf("El resultado es : %d", ft_isascii(c));
  else
    printf("El resultado es : %d", ft_isascii(c));
  return (0);
}
