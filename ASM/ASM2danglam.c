#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choice;

    do {
        printf("\n|WELCOME TO HIEU ASSIGNMENT COM108|\n");
        printf("---------------MENU----------------\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va boi so chung\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien \n");
        printf("6. Tinh lai suat vay ngan hang\n");
        printf("7. Vay mua xe\n");
        printf("8. Sap xep sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Exit\n");
        printf("\nMoi ban nhap lua chon: ");

        scanf("%d", &choice);

        switch(choice) {
        case 1: {int num;
            printf("Nhap 1 so nguyen: ");
            scanf("%d", &num);
            printf("%d la so nguyen.\n", num);
            break;
        }
         case 2: {
            int a, b;
            printf("Nhap hai so nguyen a va b: ");
            scanf("%d %d", &a, &b);
            printf("UCLN = %d\n", UCLN(a, b));
            printf("BCNN = %d\n", BCNN(a, b));
            break;
        }
        case 3:printf("ban da chon 3\n");
            break;

        case 4:printf("ban da chon 4\n");
            break;

        case 5:printf("ban da chon 5\n");
            break;

        case 6:printf("ban da chon 6\n");
            break;

        case 7:printf("ban da chon 7\n");
            break;

        case 8:printf("ban da chon 8\n");
            break;

        case 9:printf("ban da chon 9\n");
            break;

        case 10:printf("ban da chon 10\n");
            break;

        case 0:printf("Thoat chuong trinh...\n");
            break;

        default:printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
