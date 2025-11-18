#include <stdio.h>
#include <math.h>

int main(){
    int n, S= 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    //vong lặp for tong số lẻ
    for(int i=1; i<=n; i++){
        if(i % 2 != 0){
            S += i;
        }
    }
    printf("Tong cac so le : %d", S);
    
    return 0;
}