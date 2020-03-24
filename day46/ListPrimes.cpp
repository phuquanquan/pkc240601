#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100

void NhapMang(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        printf("\nNhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

bool IsPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i < n; ++i)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void PrintPrime(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        if(IsPrime(a[i]))
        {
            printf("%d\t", a[i]);
        }
    }
}

int CountPrime(int a[], int n)
{
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        if(IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
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

    int count = CountPrime(arr, n);
    if(count == 0)
    {
        printf("\nKhong co Prime trong mang!");
    } else
    {
        printf("\nSo so nguyen to co trong mang la: %d", count);
        printf("\nChung la:\t");
        PrintPrime(arr, n);
    }

}