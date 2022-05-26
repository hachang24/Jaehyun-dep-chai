#include <stdio.h>

int inputSize(int *num)
{  
        do {
            printf("Input size of the array: ");
            scanf("%d", num);
        } while (scanf("%d", num) != 1);
        return 0;
}
void inputArray(int array[], int num)
{
    for (int i = 0; i < num; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

int sumArray(int array[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++){
        sum += array[i];
    }
    printf("\nSum of values in the array is: %d", sum);
    return sum;
}

int main()
{
    int number;
    int array[100];
    inputSize(&number);
    inputArray(array, number);
    sumArray(array, number);
    return 0;
}

