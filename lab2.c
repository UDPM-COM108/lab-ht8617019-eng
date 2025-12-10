#include <stdio.h>
//#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
//Input: Nhập vào 2 số nguyên x và y
int main1() {
    int a, b, tong, hieu; 
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    tong = a + b;
    hieu = a - b;
    printf("Tong = %d\n", tong);
    printf("Hieu = %d\n", hieu);
//bai2: TÍNH CHU VI VÀ DIỆN TÍCH HCN
    float cdai, crong;  
    float chuvi, dientich;  
    printf("Nhap chieu dai: ");
    scanf("%f", &cdai);
    printf("Nhap chieu rong: ");
    scanf("%f", &crong);
    chuvi = (cdai + crong) * 2;
    dientich = cdai * crong;
    printf("Chu vi HCN = %.2f\n", chuvi);
    printf("Dien tich HCN = %.2f\n", dientich);
    //bai3:tính chu vi và diện tích hình tròn
    float bankinh;
    const float PI = 3.14;
    float chuvi_htron, dientich_htron;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);  
    chuvi_htron = 2 * PI * bankinh;
    dientich_htron = PI * bankinh * bankinh;
    printf("Chu vi hinh tron = %.2f\n", chuvi_htron);
    printf("Dien tich hinh tron = %.2f\n", dientich_htron);
    //bài4: Tính điểm TB 3 môn toán, lý, hóa
    float toan, ly, hoa;
    float diemTB;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    diemTB = (toan*3 + ly*2 + hoa*1) / 3;
    printf("Diem trung binh 3 mon = %.2f\n", diemTB);
    //bài 5: tính chuvi và diện tích tam giác vuông
    float canh1, canh2;
    float chuvi_tgvuong, dientich_tgvuong;
    printf("Nhap canh thu nhat cua tam giac vuong: ");
    scanf("%f", &canh1);
    printf("Nhap canh thu hai cua tam giac vuong: ");
    scanf("%f", &canh2);
    chuvi_tgvuong = canh1 + canh2(canh1*canh1 + canh2*canh2);
    dientich_tgvuong = (canh1 * canh2) / 2;
    printf("Chu vi tam giac vuong = %.2f\n", chuvi_tgvuong);
    printf("Dien tich tam giac vuong = %.2f\n", dientich_tgvuong);
    

    return 0;
}