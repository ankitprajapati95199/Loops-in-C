#include <stdio.h>
//to display all odd numbers from 1 to n .
int main() {
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("All odd number from 1 to %d are :\n", n);
    for (i = 1 ; i <= n; i += 2){
        printf("%d \n",i);
    }
    return 0;
}