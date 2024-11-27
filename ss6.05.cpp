#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Thang khong hop le! Vui long nhap thang tu 1 den 12.\n");
    } else {
        switch (month) {
            case 1:  // Th�ng 1
            case 3:  // Th�ng 3
            case 5:  // Th�ng 5
            case 7:  // Th�ng 7
            case 8:  // Th�ng 8
            case 10: // Th�ng 10
            case 12: // Th�ng 12
                days = 31;
                break;
            case 4:  // Th�ng 4
            case 6:  // Th�ng 6
            case 9:  // Th�ng 9
            case 11: // Th�ng 11
                days = 30;
                break;
            case 2:  // Th�ng 2

                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    days = 29;  
                } else {
                    days = 28;  
                }
                break;
            default:
                printf("Thang khong hop le! Vui long nhap thang tu 1 den 12.\n");
                return 1;
        }

        // In k?t qu?
        printf("Thang %d, nam %d co %d ngay.\n", month, year, days);
    }

    return 0;
}
