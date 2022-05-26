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

int tinh(int array[], int num)
{
    int sum = 0;
    int max = array[0], min = array[0];
    for (int i = 0; i < num; i++){
        if (max < array[i]){
            max = array[i];
        }
    }
    for (int i = 0; i < num; i++){
        if (min > array[i]){
            min = array[i];
        }
    }
    sum = max + min;
    printf("\nSum of max and min value is: %d", sum);
    return sum;
}

int main()
{
    int number;
    int array[100];
    inputSize(&number);
    inputArray(array, number);
    tinh(array, number);
    return 0;
}