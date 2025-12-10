#include <stdio.h>
int main(){
   /* double diem;
    printf("Nhap diem cua ban: ");
    scanf("%lf", &diem);
    if(diem>=9){
        printf("Xuat sac\n");
    }else 
    if(diem>=8){
        printf("Gioi\n");
    }else
    if(diem>=7){
        printf("Kha\n");
    }else
    if(diem>=5){
        printf("Trung binh\n");
    }else
    if(diem>=3){
        printf("Yeu\n");
    }else
        printf("Kem\n");*/
 
    printf("Viet Nam co bao nhieu dan toc anh em\n");
    printf("a.53\nb.54\nc.56\nd.57\n");
    printf("Xin moi nhap dap an (a,b,c,d):");
    char dapan;
    scanf(" %s", &dapan);
    switch(dapan){
        case 'a':printf("Sai roi ban oi!\n");
            break;
        case 'b':printf("Dung roi ban oi!\n");
            break;
        case 'c':printf("Sai roi ban oi!\n");
            break;
        case 'd':printf("Sai roi ban oi!\n");
            break;
        default:
            printf("Ban chon khong dung dap an (a,b,c,d)!\n");
    }
    return 0;
    
}