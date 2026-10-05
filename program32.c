#include <stdio.h>

int main() {
    int n, i, div;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    for(i = 1; i <= n ; i++ ){
        if(i % 3 == 0 || i % 5 == 0){
            printf("%d  ", i);
        }
    }
    printf("are divisible by both 3 or 5.");
    return 0;
}