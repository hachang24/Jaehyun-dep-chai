#include <stdio.h>
#include <math.h>

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
    int pri, number, sum = 0;
    do {
        printf("Enter positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    for (pri = 2; pri <= number; pri++){
        int check = checkPrime(pri);
        if (check == 1){
        sum += pri;
        }
    }
    printf("Sum the prime numbers from 2 to %d: %d", number, sum);
    return 0;
}