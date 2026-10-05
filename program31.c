#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    for(i = 1; i <= n ; i++ ){
        if (i % 3 == 0){
            count += 1;
        }
    }
    printf("There are  %d  numbers that are divisible by 3 ", count);
    return 0;
}