#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void input(int *num)
{
    do {printf("Enter positive number: ");
    scanf("%d", num);
     }
      while (*num <= 0);
}

int kiemtraSNT(int num)
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

int daonguoc(int num)
{
    int dao = 0;
    while (num > 0){
        dao = dao * 10 + num % 10;
        num /= 10;
    }
    return dao;
}

int main()
{
    int number;
    input(&number);
    int check = kiemtraSNT(number);
    if ((check == 1) && (number == reverse(number))){
        printf("%d is a palindrome number.", number);
    }else{
        if ((check == 0) && (number != reverse(number))){
            printf("%d is not a palindrome number.", number);
        }else{
            printf("%d is not a palindrome number.", number);
        }
    }
    return 0;
}

