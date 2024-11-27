#include<stdio.h>
#include<math.h>
int main(){
	 // B1:
    int a, b, c;
    double delta;
    double x;

    // B2:
    printf("Moi ban nhap vao he so a cua phuong trinh ax^2 + bx + c = 0: \n");
    scanf("%d", &a);

    printf("Moi ban nhap vao he so b cua phuong trinh ax^2 + bx + c = 0: \n");
    scanf("%d", &b);

    printf("Moi ban nhap vao he so c cua phuong trinh ax^2 + bx + c = 0: \n");
    scanf("%d", &c);

    // B3:
    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                // 0 = 0
                printf("Phuong trinh vo so nghiem\n");
            } else {
                // c = 0
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            // bx + c = 0 --> x = -c/b
            x = -(double)c/(double)b;
            printf("Nghiem cua phuong trinh la x = %.2f\n", x);
        }
    } else {
        // B4: delta = b^2 - 4ac
        delta = b*b - 4*a*c;

        // B5:
        // So sanh delta voi 0
        if(delta < 0) {
            // Phuong trinh vo nghiem
            printf("Phuong trinh vo nghiem\n");
        } else if(delta == 0) {
            // Nghiem kep
            x = -(double)b/(2*(double)a);
            printf("Phuong trinh co nghiem kep la x1 = x2 = %.2f\n", x);
        } else {
            // 2 nghiem phan biet
            // x1 = (-b + Can(delta))/2a
            // x2 = (-b - Can(delta))/2a
            x = (-(double)b + sqrt(delta))/(2*(double)a);
            printf("Phuong trinh co nghiem x1 = %.2f\n", x);

            x = (-(double)b - sqrt(delta))/(2*(double)a);
            printf("Phuong trinh co nghiem x2 = %.2f\n", x);
        }
    }

	return 0;
}
