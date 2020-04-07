#include <stdio.h>
#include <stdlib.h>
void NhapMaTran(int **a, int dong, int cot)
{
    int i, j;
    for (i = 0; i < dong; i++)
        for (j = 0; j < cot; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}
void XuatMaTran(int **a, int dong, int cot)
{
    int i, j;
    for (i = 0; i < dong; i++)
    {
        for (j = 0; j < cot; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int **a = NULL, dong, cot;
    int i;
    printf("Nhap vao so dong = ");
    scanf("%d", &dong);
    printf("Nhap vao so cot = ");
    scanf("%d", &cot);
    // Cấp phát mảng các con trỏ cấp 1
    a = (int **)malloc(dong * sizeof(int *));
    for (i = 0; i < dong; i++)
    {
        // Cấp phát cho từng con trỏ cấp 1
        a[i] = (int *)malloc(cot * sizeof(int));
    }
    NhapMaTran(a, dong, cot);
    XuatMaTran(a, dong, cot);
 
    // giải phóng từng hàng
    for (i = 0; i < dong; i++)
    {
        free(a[i]);
    }
    // giai phong con trỏ quản lý các dòng
    free(a);
    return 0;
}


/* Dùng mảng 1 chiều để biểu diễn mảng 2 chiều */

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int *a = NULL, dong, cot;
    int i;
    printf("Nhap vao so dong = ");
    scanf("%d", &dong);
    printf("Nhap vao so cot = ");
    scanf("%d", &cot);
    // Cấp phát
    a = (int *)malloc(dong * cot * sizeof(int));
 
    // Nhập ma trận
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            printf("a[%d][]%d = ", i, j);
            scanf("%d", (a + i*dong + j));
        }
    }
 
    // Xuất ma trận
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            printf("%d\t", *(a + i*dong + j));
        }
        printf("\n");
    }
 
    // giải phóng
    free(a);
    return 0;
}