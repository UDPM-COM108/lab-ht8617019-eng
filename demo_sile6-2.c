#include <stdio.h>

int main() {
    //bai1
    /*int a[7] = {8, 2, 6, 2, 9, 1, 5};
    int i, j, temp;

    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 7; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("duyet mang: ");
    for (i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }*/
   //bai2
  /* int i =0;
   int j=0;
   int ma_tran[4][3]= {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for (i=0;i<4;i++){
        for(j = 0;j<3;j++){
            printf("%d ",ma_tran[i][j]);
        }
        printf("\n");
    }*/
   //bai3 giảm dàn
   int a[7] = {8, 2, 6, 2, 9, 1, 5};
    int i, j, temp;

    for (i = 0; i < 6; i++) {
    for (j = i + 1; j < 7; j++) {
        if (a[i] < a[j]) {   
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
        printf("duyet mang: ");
        for (i = 0; i < 7; i++) {
        printf("%d ", a[i]);
        }

    return 0;
}
