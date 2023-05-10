#include<stdio.h>
int main()
{
    float r,circle;
    printf("Enter the value of r:");
    scanf("%f",&r);
    circle = 3.1416*r*r;
    printf("The area of a Circle is:%.5f",circle);
    return 0;
}
