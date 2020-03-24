#include <stdio.h>
#include <math.h>

void InsertionSort(int a[], int n)
{
    int i, j, key;
    for(i = 1; i < n; ++i)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
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

    InsertionSort(arr, n);
    printf("\nMang da sap xep la: ");
    XuatMang(arr, n);
}