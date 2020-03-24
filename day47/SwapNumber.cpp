#include <stdio.h>
const int MAX_SIZE = 100;

void Swap(int &x, int &y)
{
    int temp = y;
    y = x;
    x = temp;
}

void NhapMang(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        printf("\nNhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }

}

void SapXep(int a[], int n)
{
    bool haveSwap = false;
    for(int i = 0; i < n - 1; ++i)
    {
        haveSwap = false;
        for(int j = 0; j < n - i - 1; ++j) 
        {
            if(a[j] > a[j + 1])
            {
                Swap(a[j], a[j + 1]);
                haveSwap = true;
            }
        }
    if(haveSwap == false)
    {
        break;
    }
    }
}

void XuatMang(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int arr[MAX_SIZE];
    int n;
    printf("\nNHap so phan tu cua mang: ");
    do
    {
        scanf("%d", &n);
        if(n <= 0 || n >MAX_SIZE)
        {
            printf("\nNhap lai!");
        }
    } while (n <= 0 || n >MAX_SIZE);
    
    printf("\n======NHAP MANG=====");
    NhapMang(arr, n);

    SapXep(arr, n);
    printf("\nMang da sap xep la: ");
    XuatMang(arr, n);
}