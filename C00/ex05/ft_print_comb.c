#include <unistd.h>

void ft_print_comb(void) {
  for (char a = '0'; a <= '7'; a++) {
    for (char b = '1'; b <= '8'; b++) {
      if (b == a) {
        continue;
      }
      for (char c = '2'; c <= '9'; c++) {
        if (c == a || c == b) {
          continue;
        }
        write(1, &a, 1);
        write(1, &b, 1);
        write(1, &c, 1);
        write(1, ", ", 2);
      }
    }
  }
}
