#include <stdio.h>

int main() {
    int num;
    int sochan = 0, sole = 0;

    printf("Nhap 5 so nguyen: \n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            sochan++;  // S? ch?n
        } else {
            sole++;   // S? l?
        }
    }

    printf("So luong so chan: %d\n", sochan);
    printf("So luong so le: %d\n", sole);

    return 0;
}
