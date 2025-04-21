#include <stdio.h>


int multiply(int x, int y) {
  return(x * y);
}



int main (){
  float shoe_size = 13.457857;
  double height = 6.2223232;
  float new_shoeSize;

  printf("My current height is %lf ft\n", height);
  printf("and my shoes size is %f UK rating\n", shoe_size);

  int multiples = multiply(21, 17);
  // Multiple function example
    // Input values
  printf("Enter your new shoe size: ");
  scanf("%f", &new_shoeSize);
  printf("Your new shoe size is %f in UK rating\n", new_shoeSize);
  // Multiplication field
  printf("Your multiplication value is %d ", multiples);
  return 0;
  }