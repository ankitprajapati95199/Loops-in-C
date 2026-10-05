#include <stdio.h>
//to display n natural numbers.
int main() {
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The natural number from 1 to %d are :\n", n);
    for (i = 1; i <= n; i++){
        printf("%d \n",i);
    }
    return 0;
}