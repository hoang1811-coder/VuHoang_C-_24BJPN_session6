#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        // Ki?m tra n?u i là b?i s? c?a c? 3 và 5
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
       
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
