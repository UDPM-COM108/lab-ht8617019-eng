#include <stdio.h>
int main(){
    /*# Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
 Input: Nhập vào dtb của Sinh Viên từ 0 đến 10 
Output: Xuất ra màn hình Học lực của Sinh Viên
Nếu dtb>=9 -> Học Lực Xuất Sắc
Nếu dtb>=8 và dtn<9 -> Học Lực Giỏi
Nếu dtb>=6.5 và dtn<8 -> Học Lực Khá
Nếu dtb>=5 và dtn<6.5 -> Học Lực Trung Bình
Ngược lại Học Lực Yếu*/
double diem;
    printf("Nhap dtb cua ban: ");
    scanf("%lf", &diem);
    if(diem>=9){
        printf("Hoc luc xuat sac");
    }else 
    if(diem>=8 && diem<9){
        printf("Hoc luc gioi");
    }else
    if(diem>=7 && diem<8){
        printf("Hoc luc kha");
    }else
    if(diem>=5 && diem<6.5){
        printf("Hoc luc trung binh");
    }else
        printf("Hoc luc yeu");
        /*Bài 2: Giải phương trình bậc nhất
Phương trình có dạng ax + b = 0
Input: nhập vào từ bàn phím giá trị của a, b
Output: Hiển thị nghiệm của phương trình*/
double a,b,x;
    printf("\nNhap a: ");
    scanf("%lf",&a);
    printf("Nhap b: ");
    scanf("%lf",&b);
    if(a==0){
    if(b==0){
        printf("Phuong trinh vo so nghiem");
    }else{
        printf("Phuong trinh vo nghiem");
    }
    }else{
    x=-b/a;
    printf("Nghiem cua phuong trinh la x= %.2lf",x);
}   
/*# Bài 3: Giải Phương trình bậc 2
Phương trình có dạng: ax2 + bx + c = 0
Input: Nhập vào từ bàn phím: a, b, c
Output: Nghiệm của phương trình*/
double a1,b1,c1,delta,x1,x2;
    printf("\nNhap a1: ");
    scanf("%lf",&a1);
    printf("Nhap b1: ");
    scanf("%lf",&b1);
    printf("Nhap c1: ");
    scanf("%lf",&c1);
    if(a1==0){
    if(b1==0){
        if(c1==0){
            printf("Phuong trinh vo so nghiem");
        }else{
            printf("Phuong trinh vo nghiem");
        }
    }else{
        x1=-c1/b1;
        printf("Phuong trinh co nghiem x= %.2lf",x1);
    }
}else{
    delta=b1*b1-4*a1*c1;
    if(delta<0){
        printf("Phuong trinh vo nghiem");
    }else if(delta==0){
        x1=-b1/(2*a1);
        printf("Phuong trinh co nghiem kep x1=x2= %.2lf",x1);
    }else{
        x1=(-b1+sqrt(delta))/(2*a1);
        x2=(-b1-sqrt(delta))/(2*a1);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1= %.2lf\n",x1);
        printf("x2= %.2lf\n",x2);
    }
}
    /*bai4: xây dựng chương trình tính tiền điện
    input: Nhập vào số tiền điện tiêu thụ hằng tháng
    output: Hiện thị ra số tiền cần phải đóng*/
    void tinh tien dien(){
    float soDien, tienDien=0;
    printf("\nNhap so dien tieu thu trong thang: ");
    scanf("%f", &soDien);
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
    printf("So tien dien phai dong: %.2f VND\n", tienDien);
}
            
    return 0;
}
