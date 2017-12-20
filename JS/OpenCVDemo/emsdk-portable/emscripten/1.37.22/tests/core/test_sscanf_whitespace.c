#include <stdio.h>

int main() {
  short int x;
  short int y;

  const char* buffer[] = {"173,16",      "    16,173",   "183,   173",
                          "  17,   287", " 98,  123,   "};

  for (int i = 0; i < 5; ++i) {
    sscanf(buffer[i], "%hd,%hd", &x, &y);
    printf("%d:%d,%d ", i, x, y);
  }

  return 0;
}
