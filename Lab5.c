#include <stdio.h>
#include <math.h>

// Hàm kiểm tra năm nhuận
int checkYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int main() {
    int a, b, c;
    printf("Nhap 3 so nguyen a, b, c:\n");
    scanf("%d %d %d", &a, &b, &c);

    int max = a, min = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    // bai 2
    int year;
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if (checkYear(year)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }

    // bai 3
    int n;
    printf("Nhap mot so trong khoang [1, 1000]: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 1000) {
        if (n % 5 == 0 && n % 9 == 0) {
            printf("%d chia het cho ca 5 va 9.\n", n);
        } else {
            printf("%d khong chia het cho ca 5 va 9.\n", n);
        }
    } else {
        printf("So nhap khong nam trong khoang [1, 1000].\n");
    }

    return 0;
}
