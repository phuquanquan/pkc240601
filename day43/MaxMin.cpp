#include <stdio.h>

const int MAX_SIZE = 100;

void NhapMang(int a[], int n)
{
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    for(int i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] la = %d", i, a[i]);
    }
}

int Max(int a[], int n)
{
    int max = a[0];
    for(int i = 0;i < n; ++i)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int GetMaxPosition(int a[], int n)
{
    int maxValue = Max(a, n);
    int p;
    for(int i = 0;i < n; ++i)
    {
        if(a[i] == maxValue)
        {
            p = i;
        }
    }
    return p + 1;
}

int main()
{
    int arr[MAX_SIZE];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX_SIZE){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX_SIZE);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG=====");
    XuatMang(arr, n);

    printf("\nGia tri max trong mang la: %d va la phan tu so: %d", Max(arr, n), GetMaxPosition(arr, n));
}
