#include <stdio.h>

const int MAX_SIZE = 100;

void NhapMang(int a[], int n)
{
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int TongOld(int a[], int n)
{   
    int SumOld = 0;
    for(int i = 0; i < n; ++i)
    {
        if( a[i] % 2 == 1)
        {
            SumOld += a[i];
        }
    }
    return SumOld;
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

    printf("\nTong cac so le trong mang la: %d", TongOld(arr, n));
}