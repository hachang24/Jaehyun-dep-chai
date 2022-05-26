#include <stdio.h>

void inputSize(int *num)
{
    printf("Input size of the array: ");
    scanf("%d", num);
}

void inputArray(int array[], int num)
{
    for (int i = 0; i < num; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

int checkPrime(int num)
{
    if (num < 2){
        return 0;
    } 

    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
        return 0;
        }
    }
    return 1;
}

int main()
{
    int number, i;
    int array[100];
    inputSize(&number);
    inputArray(array, number);
    printf("Prime values of array are:");
    for (i = 0; i < number; i++){
        if (checkPrime(array[i]) == 1){
            printf(" %d  ", array[i]);
        }
    }
    return 0;
}