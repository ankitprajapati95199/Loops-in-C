#include <stdio.h>

int main() {
    //program to find the sum of natural numbers till n.
    int i, n, sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i = 1 ; i <= n; i += 1)
    {
        sum = sum + i;
    }
    printf("The sum of all the numbers from 1 to %d is %d" , n , sum);
    return 0;
}