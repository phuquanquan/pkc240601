#include <stdio.h>
#define MAX_SIZE 100

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap arr[%d]: ", i);
        scanf("%d", & a[i]);
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, a[i]);
    }
}
void AddPt(int a[], int &n, int val, int pos)
{
    if ( n >= MAX_SIZE)
    {
        return;
    }
    
    if(pos < 0)
    {
        pos = 0;
    } else if ( pos > n)
    {
        pos = n;
    }

    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    
    a[pos] = val;
    ++n;
}

void DelePt(int a[], int &n, int pos)
{
    if(n <= 0)
    {
        return;
    }

    if( pos < 0)
    {
        pos = 0;
    } else if( pos > MAX_SIZE)
    {
        pos = n - 1;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    
    --n;
}

int main()
{
    int arr[MAX_SIZE];
    int n;
    printf("\nNhap so phan tu: ");
    do
    {
        scanf("%d", &n);
        if( n <= 0 || n > MAX_SIZE)
        {
            printf("\nAgain!");
        }
    } while ( n <= 0 || n > MAX_SIZE);

    NhapMang(arr, n);

    XuatMang(arr, n);

    int val, pos;
    printf("\nNhap gia tri val can them va vi tri them vao mang: ");
    scanf("%d%d", &val, &pos);

    AddPt(arr, n, val, pos);

    printf("\nMang da them la: ");
    XuatMang(arr, n);

    int dele;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &dele);
    DelePt(arr, n, dele);
    XuatMang(arr, n);
}