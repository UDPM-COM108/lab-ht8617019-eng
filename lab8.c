#include <stdio.h>
struct SINHVIEN{
    int MSSV;
    char HoTen[50];
    float Diem;
};
int main(){
    struct SINHVIEN SV1;
    printf("Nhap MaSV Sv1 : ");
    scanf("%d",&SV1.MSSV);
    printf("Nhap HoTen Sv1 : ");
    scanf("%s",&SV1.HoTen);
    printf("Nhap điểm Sv1 : ");
    scanf("%f",&SV1.Diem);
    //xuat
    printf("MaSV: %d - HoTen: %s - Diem: %.2f",SV1.MSSV,SV1.HoTen,SV1.Diem);
    struct SINHVIEN SV2;
    printf("Nhap MaSV Sv2 : ");
    scanf("%d",&SV2.MSSV);
    printf("Nhap HoTen Sv2 : ");
    scanf("%s",&SV2.HoTen);
    printf("Nhap điểm Sv2 : ");
    scanf("%f",&SV2.Diem);
    //xuat
    printf("MaSV: %d - HoTen: %s - Diem: %.2f",SV2.MSSV,SV2.HoTen,SV2.Diem);
    return 0;

}