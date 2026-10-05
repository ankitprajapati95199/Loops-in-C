#include <stdio.h>
//to display natural number in reverse [ from n to 1 ]
int main() {
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The natural number from %d to 1 are :\n", n);
    for (i = n; i >= 1; i--){
        printf("%d \n",i);
    }
    return 0;
}