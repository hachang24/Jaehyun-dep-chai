#include <stdio.h>

int main()
{
    int num;
    float sum;
    printf("Input the number of terms: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum = sum + 1.0 / i;
    }
    for (int i = 1; i <= num; i++) {
        printf("1/%d", i);
        if (i < num) {
            printf(" + ");
        }
    } 
    printf("\nSum of Series upto %d terms: %f", num, sum);
    return sum;
}