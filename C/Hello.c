#include <stdio.h>
#define PI 3.14159
// Created by giddy on 11/7/2024.
int main() {
    double area = 0.0, radius = 0.0;
    printf("Enter the Radius\n");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("The current radius %lf; Has an area of %lf", radius, area);
}