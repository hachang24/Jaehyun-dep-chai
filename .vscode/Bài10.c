#include <stdio.h>

void inputOld( int *number)
{
    printf("Enter an integer: ");
    scanf("%d", number);
}

int main()
{
    int num, old;
    inputOld(&num);
    old = num;
    int *temp = &num;
   
    printf("Enter new value: ");
    scanf("%d", temp);

    printf("Old value   : %d", old);
    printf("\nNew value : %d", *temp);
    return 0;
}