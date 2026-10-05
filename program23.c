#include <stdio.h>
//to display all even numbers from 1 to n .
int main() {
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("All even number from 1 to %d are :\n", n);
    for (i = 2; i <= n; i += 2){
        printf("%d \n",i);
    }
    return 0;
}