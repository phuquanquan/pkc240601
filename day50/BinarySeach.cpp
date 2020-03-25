#include <stdio.h>

int InsertionSort(int arr[], int n)
{
    int i, j, key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int BinarySeach(int arr[], int r, int l, int v)
{
    if(l >= r)
    {
        int mid = l + (r - l) / 2;
        if(v == arr[mid])
        {
            return mid;
        }
        if(v > arr[mid])
        {
            return BinarySeach(arr, mid, l, v);
        } else
        {
            return BinarySeach(arr, r, mid, v);
        }
    }
    return -1;
}

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
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
    int v;
    printf("\nNhap gia tri can tim kiem: ");
    scanf("%d", &v);

    BinarySeach(arr, 0, n - 1, v);
    
    if(BinarySeach(arr, 0, n - 1, v) == -1)
    {
        printf("\nKhong co gia tri trong mang!");
    } else
    {
        printf("\nGia tri can tim la arr[%d] = %d", BinarySeach(arr, 0, n -1, v), arr[BinarySeach(arr, 0, n - 1, v)]);
    }
}