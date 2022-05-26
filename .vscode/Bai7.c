#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void input(int *num)
{
    do {printf("Enter positive number: ");
    scanf("%d", num);
    if (scanf("%d") == 1)
     }
      while ((*num <= 0) && (scanf("%d") != 1));
}

bool kiemtraSNT(int num)
{
    if (num < 2){
        return false;
    } 
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
        return false;
        }
    }
    return true;
}

int main()
{
    int number;
    input(&number);
    int check = kiemtraSNT(number);
    if (check == false){
        printf("%d is not a prime number", number);
    }else
        if (check == true){
            printf("%d is a prime number", number);
        }
    
    return 0;
}