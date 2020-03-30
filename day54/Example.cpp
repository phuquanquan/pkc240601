#include <stdio.h>

void NhapMang(int a[][10], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("A[%d][%d]", i, j);
            scanf("%d", a[i][j]);
        }

    }
}

void XuatMang(int a[][10], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10];
    int m, n;
    do
    {
        scanf("%d%d", &m, &n);
        if(m < 1 || n > 10)
        {
            printf("\nAgain!");
        }
    } while(m < 1 || n > 10);

    NhapMang(a, m, n);
    XuatMang(a, m, n);
}