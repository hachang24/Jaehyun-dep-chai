#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    do {printf("Enter positive number: ");
    scanf("%d", &num);
     }
      while (num <= 0);
    
    if (num < 2){
        printf("%d is not a prime number", num);
        return 0;
    } 

    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
        printf("%d is not a prime number", num);
        return 0;
    }else{
         } 
    }
    printf("%d is a prime number", num);
    return 0; 
}
  