#include <stdio.h>      
int main() {
  int a;
  long b;
  long long c;
  long double d;
  printf("size of int = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}
