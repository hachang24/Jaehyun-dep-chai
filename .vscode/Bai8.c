#include <stdio.h>
#include <math.h>

const float pi = 3.14;

void input(float *r)
{
    printf("Enter radius of circle: ");
    scanf("%f", r);
}

float dia(float d, float r)
{
    d = 2 * r;
    return d;
}

float cir(float c, float r)
{
    c = r * 2 * pi;
    return c;
}

float area(float s, float r)
{
    s = pi * r * r;
    return s;
}

int main()
{
    float R, d, c, s;
    input(&R);
    printf("%f\n", R);
    printf("Diameter of the circle        = %.4f units", dia(d,R));
    printf("\nCircumfernce of the circle  = %.4f units", cir(c,R));
    printf("\nArea of the circle          = %.4f units", area(s,R));
    return 0;
}