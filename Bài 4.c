#include <stdio.h>

float tongThapphan(int num)
{
   float s; 
   for (int i = 1; i <= num; i++) {
        s = s + 1.0 / i;
    }
    return s; 
}

int main()
{
    int num;
    float sum;
    printf("Input the number of terms: ");
    scanf("%d", &num);
    
    printf("Sum of Series upto %d terms: %f", num,  tongThapphan(num));
    return 0;

}
