#include <stdio.h>

void input( float *numbera, float *numberb)
{
    printf("Enter two numbers: ");
    scanf("%f %f", numbera, numberb);
}

int before(float numbera, float numberb)
{
    printf("Before swapping");
    printf("\nValue of num1 = %.2f", numbera);
    printf("\nValue of num2 = %.2f", numberb);
    return numbera, numberb;
}

void swap(float *numbera, float *numberb)
{
    float temp = *numbera;
    *numbera = *numberb;
    *numberb = temp;
}

int after(float numbera, float numberb)
{
    printf("\n\nAfter swapping");
    printf("\nValue of num1 = %.2f", numbera);
    printf("\nValue of num2 = %.2f", numberb);
    return numbera, numberb;
}

int main()
{
    float numa, numb;
    input(&numa, &numb);
    before(numa, numb);
    swap(&numa, &numb);
    after(numa, numb);
    return 0;
}