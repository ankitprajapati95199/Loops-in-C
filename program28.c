#include <stdio.h>

int main() {
    int i , n , factorial = 1;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++ ){
        factorial *= i; 
    }
    printf("The product( FACTORIAL ) of all natural number from 1 to %d is \n       %d ", n , factorial);
    return 0;
}