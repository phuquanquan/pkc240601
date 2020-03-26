#include <stdio.h>

#define MAX_SIZE 100

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNHap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
}
// // C1: Sắp xếp mảng giảm dần

// void InsertionSort(int a[], int n)
// {
//     int i, j, key;
//     for ( i = 1; i < n; i++)
//     {
//         key = a[i];
//         j = i - 1;
//         while(j >= 0 && a[j] > key)
//         {
//             a[j + 1] = a[j];
//             j = j - 1;
//         }
//         a[j+1] = key;
//     }
// }

// C2: Tìm số lớn thứ 2
int FindByLoop(int a[], int n){
    int firstMax, secondMax;
    if (a[0] > a[1]){
        firstMax = a[0];
        secondMax = a[1];
    }else{
        firstMax = a[1];
        secondMax = a[0];
    }
    for(int i = 2; i < n; i++){
        if(a[i] >= firstMax){
            secondMax = firstMax;
            firstMax = a[i];
        }else if (a[i] > secondMax){
            secondMax = a[i];
        }
    }
    return secondMax;
}

int main()
{
    int a[MAX_SIZE];
    int n;
    printf("\nNHap so phan tu: ");
    do
    {
        scanf("%d", &n);
        if(n <= 0 || n > MAX_SIZE)
        {
            printf("\nAgain!");
        }
    } while (n <= 0 || n > MAX_SIZE);
    
    NhapMang(a, n);

    // InsertionSort(a, n);

    XuatMang(a, n);

    int t = FindByLoop(a, n);
    printf("\n%d", t);
}