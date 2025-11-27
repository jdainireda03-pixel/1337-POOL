#include <unistd.h>

void ft_putnbr(int nb) {
  char c[50];
  int n = nb;
  int count = 0;
  if (n == 0)
    write(1, "0", 1);
  if (n < 0) {
    n = -n;
    nb = -nb;
    write(1, "-", 1);
  }
  while (n >= 1) {
    n /= 10;
    count++;
  }
  for (int i = count - 1; i >= 0; i--) {
    c[i] = nb % 10 + '0';
    nb = nb / 10;
  }
  write(1, c, count);
  write(1, "\n", 1);
}
