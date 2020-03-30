#include <stdio.h>
#include <utility>
 
void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
 
std::pair<int, int> TimKiem(int a[][100], int m, int n, int v){
    for(int i = 0; i < m; i++)
       {
          for(int j = 0; j < n; j++)
             if(a[i][j] == v) return {i, j};
       }
    return {-1, -1};
}
 
int main(){
    int a[100][100];
    int m,n;
    printf("Nhap so hang n = "); scanf("%d",&n);
    printf("Nhap so cot m = "); scanf("%d",&m);
    printf("Nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    
    int v;
    printf("\nNhap vao gia tri can tim: ");
    scanf("%d", &v);
    std::pair<int, int> rs = TimKiem(a, m, n, v);
    printf("\nTim thay so %d tai hang %d, cot %d!", v, rs.first, rs.second);
}