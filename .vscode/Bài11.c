#include <stdio.h>

void input( float *numbera, float *numberb)
{
    printf("Enter any two real numbers: ");
    scanf("%f %f", numbera, numberb);
}

int main()
{
    float numa, numb;
    input(&numa, &numb);
    printf("%.2f + %.2f = %.2f", numa, numb, numa + numb);
    printf("\n%.2f - %.2f = %.2f", numa, numb, numa - numb);
    printf("\n%.2f * %.2f = %.2f", numa, numb, numa * numb);
    printf("\n%.2f / %.2f = %.2f", numa, numb, numa / numb);
    return 0;
}