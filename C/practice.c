#include <stdio.h>

 static int number = 5;
int main() {
    signed int age = 5.2/9.3; // Only non-negative values
    double salary = 55000.75; // High precision
    printf("Age: %u, Salary: %.2f\n", age, salary);
    printf("%lf", age);
    return 0;
}