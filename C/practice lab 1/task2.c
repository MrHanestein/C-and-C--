#define FIBONACCI_NUM 6
#include "fibonacci.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
  int result = fibonacci(FIBONACCI_NUM);
  printf("fibonacci of %d = %d\n", FIBONACCI_NUM, result);
  return 0;
}