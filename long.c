#include <stdio.h>
#include <string.h>

int main(void) {
  size_t len;
  char str[] = "hello world";
  printf("%s\n", str);

  len = strlen(str);
  printf("%ld\n", len);
  return 0;
}