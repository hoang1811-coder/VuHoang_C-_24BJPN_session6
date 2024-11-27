#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    printf("Nhap 5 so nguyen: \n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    printf("Tong cac so le la: %d\n", sum);

    return 0;
}
