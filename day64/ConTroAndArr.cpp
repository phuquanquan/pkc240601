// Ví dụ mối quan hệ giữa con trỏ và mảng - Lập Trình Không Khó
#include <stdio.h>
#define MAX_SIZE 100
 
int main()
{
    int arr[MAX_SIZE];
    int n;
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    } while (n < 1);
 
    int *p = &arr[0];
    // Nhập mảng
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", (p + i));
    }
 
    // Xuất mảng
    for (int i = 0; i < n; i++)
    {
        printf("\nGia tri a[%d] = %d", i, *(p + i));
    }
 
    // Tính tổng sử dụng biến lặp là con trỏ
    // Khởi tạo con trỏ i trỏ tới phần tử đầu tiên của mảng
    // Ta sẽ dừng nếu giá trị của i vượt quá địa chỉ của phần tử cuối cùng
    // i++: tăng i lên 1 đơn vị, tức là cho nó trỏ tới phần tử tiếp theo
    int sum = 0;
    for(int *i = &arr[0]; i <= &arr[n-1]; i++){
        // Lấy giá trị của phần tử hiện tại bằng toán tử `*`
        sum += *i;
    }
    printf("\nSum = %d", sum);
}