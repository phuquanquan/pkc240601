#include <stdio.h>

void Swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("%d\t", a[i]);
    }
}

void SelectionSort(int a[], int n)
{
    int i, j, min_idx;
    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min_idx])
            {
                min_idx = j;    
                Swap(a[i], a[min_idx]);
            }
        }
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

    SelectionSort(arr, n);
    printf("\nMang da sap xep la: ");
    XuatMang(arr, n);
}