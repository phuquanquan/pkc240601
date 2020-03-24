#include <stdio.h>

void NhapMang(int a[], int n)
{
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMangSX(int a[], int n)
{
    int tg;
    for(int i = 0;i < n; ++i){
        for(int j = i + 1; j < n; ++j)
        {
            if(a[i] < a[j])
            {
                tg = a[j];
                a[j] = a[i];
                a[i] = tg;
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        printf("%5d", a[i]);
    }
}

int main()
{
    int arr[100];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG DA SAP XEP=====");
    XuatMangSX(arr, n);
}
