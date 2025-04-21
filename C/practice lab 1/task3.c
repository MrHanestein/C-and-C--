#define FIBONACCI_NUM 6
#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int result;

    if (argc == 2) {
      int number = atoi(argv[1]);
      result = fibonacci(atoi(argv[1]));
      printf("fibonacci(%d) = %d\n", number, result);
      }
    else {
      result = fibonacci(FIBONACCI_NUM);
    printf("fibonacci of %d = %d\n", FIBONACCI_NUM, result);
    }
    return 0;
    }
