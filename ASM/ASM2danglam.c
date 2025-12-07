#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}
float tinhTienDien(float soDien) {
    float tienDien = 0;
    if(soDien <= 50){
        tienDien = soDien * 1.678;
    }else if(soDien <= 100){
        tienDien = 50 * 1.678 + (soDien - 50) * 1.734;
    }else if(soDien <= 200){
        tienDien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
    }else if(soDien <= 300){
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
    }else if(soDien <= 400){
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
    }else{
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
    }
    return tienDien;
}

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
        case 3:{
            int start, end;
            float total = 0;
            printf("Nhap gio bat dau (12-23): ");
            scanf("%d", &start);
            printf("Nhap gio ket thuc (12-23): ");
            scanf("%d", &end);

            if (start < 12 || start > 23 || end < 12 || end > 23 || end <= start) {
            printf("Gio khong hop le!\n");
            break;
            }
            int hours = end - start;
            if (hours <= 3) {
            total = hours * 50000; 
            } else {
             total = 150000 + (hours - 3) * (50000 * 0.7);
            }
            if (start >= 14 && start <= 17) {
            total *= 0.9;
            }
             printf("Tien can thanh toan: %.0f VND\n", total);
             break;
            }

        case 4:{
            float soDien;
            printf("Nhap so dien tieu thu: ");
            scanf("%f", &soDien);
            printf("So tien dien: %.2f VND\n", tinhTienDien(soDien));
            break;
        }

        case 5:{
            int money;
            int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            int soTo;
            printf("Nhap so tien can doi: ");
            scanf("%d", &money);
            printf("Cac menh gia duoc doi ra:\n");
            for (int i = 0; i < 9; i++) {
            soTo = money / menhGia[i];
            if (soTo > 0) {
            printf("%d to %d\n", soTo, menhGia[i]);
            money %= menhGia[i]; 
                }
             }
             break;
        }
        case 6: {
            long tienVay;
            float laiSuat = 0.05; 
            int thang = 12;
            printf("Nhap so tien muon vay: ");
            scanf("%ld", &tienVay);
            long gocMoiThang = tienVay / thang;
            long gocConLai = tienVay;
            printf("\n%-10s %-15s %-15s %-15s %-15s\n",
           "Ky han", "Lai phai tra", "Goc phai tra", "Tong phai tra", "So tien con lai");
            for (int i = 1; i <= thang; i++) {
            long laiPhaiTra = gocConLai * laiSuat;
            long tongPhaiTra = laiPhaiTra + gocMoiThang;
            gocConLai -= gocMoiThang;
            printf("%-10d %-15ld %-15ld %-15ld %-15ld\n",
               i, laiPhaiTra, gocMoiThang, tongPhaiTra, gocConLai);
                }

            break;
        }
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
