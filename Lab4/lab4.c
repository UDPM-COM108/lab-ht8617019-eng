/*#BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
Input: nhập từ bàn phím 2 giá trị min, max
Output: Trung bình tổng của các số tự nhiên chia hết cho 2 từ min tới max
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int min, max;
    float tong = 0, bienDem = 0, trungBinh = 0;
    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);
    int i = min;
    while(i <= max){
        if(i % 2 == 0){
            tong += i;
            bienDem ++;
        }
        i++;
    }
    if(bienDem != 0){
        trungBinh = tong / bienDem;
        printf("Trung binh tong cac so tu nhien chia het cho 2 tu %d den %d la: %.2f", min, max, trungBinh);
    } else {
        printf("Khong co so tu nhien chia het cho 2 trong khoang tu %d den %d", min, max);
    }
    /*#Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
Input: Nhập vào từ bàn phím số x
Output: Kết luận x có phải là số nguyên tố hay không
*/
    int x, count = 0;
    printf("\n\nNhap mot so nguyen x: ");
    scanf("%d", &x);
    if(x < 2){
        printf("%d khong phai la so nguyen to.", x);
    } else {
        for(int i = 2; i < x; i++){
            if(x % i == 0){
                count++;
            }
        }
        if(count == 0){
            printf("%d la so nguyen to.", x);
        } else {
            printf("%d khong phai la so nguyen to.", x);
        }
    }
   /* #Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
Input: Nhập vào từ bàn phím số x
Output: Kết luận x có phải là số chính phƣơng hay không?
*/
    int num, found = 0;
    printf("\n\nNhap mot so nguyen num: ");
    scanf("%d", &num);
    if(num < 0){
        printf("%d khong phai la so chinh phuong.", num);
    } else {
        for(int i = 1; i * i <= num; i++){
            if(i * i == num){
                found = 1;
                break;
            }
        }
        if(found){
            printf("%d la so chinh phuong.", num);
        } else {
            printf("%d khong phai la so chinh phuong.", num);
        }
    }
    /*bài 4 menu*/
    int menu;
    printf("\n\n---MENU---\n");
    printf("1. Tinh trung binh tong cac so tu nhien chia het cho 2\n");
    printf("2. Kiem tra so nguyen to\n");
    printf("3. Kiem tra so chinh phuong\n");
    printf("4. Thoat\n");
    printf("Chon chuc nang (1-4): ");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            printf("Da chon 1");
            break;
        case 2:
            printf("Da chon 2");
            break;
        case 3:
           printf("Da chon 3");
            break;
        case 4:
            printf("Thoat chuong trinh.\n");
            exit(0);
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
    }
    
    return 0;
}