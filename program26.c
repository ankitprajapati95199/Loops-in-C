#include <stdio.h>

int main() {
    //program to find sum of n even numbers
    int i, n, sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i = 2 ; i <= n; i += 2)
    {
        sum = sum + i;
    }
    printf("The sum of all the even numbers from 1 to %d is %d" , n , sum);
    return 0;
}