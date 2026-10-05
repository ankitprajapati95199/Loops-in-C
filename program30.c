#include <stdio.h>

int main() {
    int n , i, limit;
    printf("Enter a number to write table : ");
    scanf("%d",&n);

    printf("Enter how many multiples ypu want : ");
    scanf("%d",&limit);

    for (i = 1; i <= limit; i++){
        printf("%d X %d = %d \n ", n, i, n * i);
    }
    return 0;
}