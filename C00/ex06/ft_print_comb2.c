#include <unistd.h>

void ft_print_comb2(void) {
  char c[2];
  char d[2];
  for (int a = 0; a < 99; a++) {
    for (int b = a + 1; b < 100; b++) {
      c[0] = (a / 10) + '0';
      c[1] = (a % 10) + '0';
      d[0] = (b / 10) + '0';
      d[1] = (b % 10) + '0';
      write(1, c, 2);
      write(1, " ", 1);
      write(1, d, 2);
      write(1, ", ", 2);
    }
  }
}
