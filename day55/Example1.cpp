#include <stdio.h>
#include <conio.h>

void NhapMang(int a[][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", a[i][j]);
        }

    }
}

void XuatMang(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int MaxColumn1(int a[][100], int m, int n)
{
    int maxr1;
    maxr1 = a[0][0];
    for (int i = 1; i < m; i++)
    {
        if(a[i][0] > maxr1)
        {
            maxr1 = a[i][0];
        }
    }
    return maxr1;
}

int main()
{
    int arr[100][100];
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    NhapMang(arr, m, n);
    XuatMang(arr, m, n);

    int maxr1 = MaxColumn1(arr, m, n);
    printf("\n%5d", maxr1);
}


// #include<stdio.h>
// #include<conio.h>
// main()
// {
//     int a[50][50];
//     int i,j,m,n;
//     printf("nhap so hang n="); scanf("%d",&n);
//     printf("nhap so cot m="); scanf("%d",&m);
//     printf("nhap vao ma tran:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
// //hien thi ma tran vua nhap duoi dang bang
//     printf("ma tran vua nhap la:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// // tinh tong pt tren hang chan cua mang
//     float s=0;
//     for(i=0;i<n;i=i+2)
//     {
//         for(j=0;j<m;j++)
//         {
//             s=s+a[i][j];
//         }
//     }
//     printf("\nTong pt tren hang chan cua mang la: %5f",s);
// // tim max tren cot 1 cua mang
//     int max;
//     max=a[0][0];
//     for(i=1;i<n;i++)
//     {
//         if(a[i][0]>max)
//         {
//             max=a[i][0];
//         }
//     }
//     printf("\nGia tri max tren cot 1 cua mang la %5d",max);
//     getch();
// }