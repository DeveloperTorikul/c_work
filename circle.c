#include <stdio.h>

void main(){

    float radius;
    float circle;
    float pi = 3.1416;

    printf("Enter a radius: ");
    scanf("%f",&radius);

    circle = pi*(radius*radius);

    printf("The area of circle is : %f",circle);
}