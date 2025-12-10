#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /*1
    char s[100];
    printf("Nhap chuoi : ");
    gets(s);  
    int i = 0;
    int n = 0;  
    int p = 0;  
    while (!(s[i] == '&' && s[i+1] == '&') && s[i] != '\0') {
        char c =s[i];

        if (c >= 'a' && c <= 'z') {   
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                n++;
            else
                p++;
        }
        i++;
    }
    printf("so nguyen am: %d\n", n);
    printf("so phu am: %d\n", p);*/
    /*2*/
    char userSys[] = "admin";   // username hệ thống
    int passSys = 12345;        // password hệ thống

    char user[100];             // username người dùng nhập
    int pass;                   // password người dùng nhập

    // Nhập username
    printf("Nhap username: ");
    scanf("%s", user);

    // Nhập password
    printf("Nhap password: ");
    scanf("%d", &pass);

    // So sánh
    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Dang nhap thanh cong\n");
    } else {
        printf("Dang nhap that bai\n");
    }


    return 0;
}
