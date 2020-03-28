#include <stdio.h>
#include <math.h>
const int MAX_SIZE = 100;

void NhapMang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap arr[%d] = ", i);
        scanf("%d", arr[i]);
    }
}

// C1. Tính trung bình cộng các số lẻ ở vị trí chẵn.
int SumOldInEven(int arr[], int n)
{
    int sum = 0, p = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            sum += arr[i];
            p++;
        }
    }
    return sum/p;
}

// C.2 Tìm số lớn nhất trong mảng vừa nhập.
int MaxArr(int arr[], int n)
{
    int max_idx = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max_idx)
        {
            max_idx = arr[i];
        }
    }
    return max_idx;
}

// C.3 Tìm vị trí các số nhỏ nhất trong mảng.
int VitriMin(int arr[], int n)
{
    int min_idx = arr[0];
    int p;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min_idx)
        {
            min_idx = arr[i];
            p = i;
        }
    }
    return p;
}

// C.4 Đếm các số chính phương có trong mảng.
int NumberSquareRoot(int arr[], int n)
{
    int p = 0;
    float rs;
    for(int i = 0; i < n; i++)
    {
        rs = sqrt(arr[i]);
        if(rs == (int)rs )
        {
            p++;
        }
    }
    return p;
}

//  C.5 Hiện thị các số nguyên tố có trong mảng lên màn hình.
int PrintPrime(int arr[], int n)
{
    bool snt;
    for (int i = 0; i < n; i++)
    {
        for(int j = 2; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                snt = false;
            }
        }
        if(arr[i] >= 2 && snt == true)
        {
            printf("\n%d", arr[i]);
        }
    }
    
}

// C.6 Thay thế các phần tử âm có trong mảng bằng giá trị 0.
void ReplaceNegative(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    
}

// C.7 Xóa các phần tử âm có trong mảng.
void DeleteNegetive(int arr[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            for(int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
}

// C.8 Sắp xếp mảng đã nhập theo thứ tự tăng dần.
void SapXepArrTD(int arr[], int n)
{
    int key;
    int i, j;
    for(i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j -1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[MAX_SIZE];
    int n;
    printf("\nNhap so phan tu cua mang: ");
    do
    {
        scanf("%d", &n);
        if(n <= 0 || n > MAX_SIZE)
        {
            printf("\nAgain!");
        }
    } while (n <= 0 || n > MAX_SIZE);

    NhapMang(arr, n);

    MaxArr(arr, n);
    NumberSquareRoot(arr, n);
    PrintPrime(arr, n);
    ReplaceNegative(arr, n);
    SapXepArrTD(arr, n);
    SumOldInEven(arr, n);
    VitriMin(arr, n);
    DeleteNegetive(arr, n);
}