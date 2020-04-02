#include <stdio.h>
int main()
{
  // Khai báo + khởi tạo biến value = 10
  int value = 10;
 
  // Lấy giá trị của biến value
  printf("\nGia tri cua `value` = %d", value);
  // Lấy địa chỉ của biến value
  printf("\nDia tri cua `value` = %d", &value);
 
  printf("\n-------------------\n");
 
  /* 
  Khai báo + khởi tạo biến con trỏ p 
  có giá trị là địa chỉ của biến value 
  */
  int *p = &value;
 
  // Lấy giá trị của con trỏ p
  printf("\nGia tri cua con tro `p` = %d", p);
  // Lấy địa chỉ của con trỏ p
  printf("\nDia tri cua con tro `p` = %d", &p);
  // Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
 
  printf("\n-------------------\n");
 
  /* 
  Thay đổi giá trị của biến value thông qua con trỏ p
  Giống như hàm scanf() có thể thay đổi giá trị của biến khi nhận vào địa chỉ,
  con trỏ khi có địa chỉ của 1 biến hoàn toàn có thể thay đổi giá trị của
  biến đó theo cách dưới đây: 
  */
  // Lấy giá trị của biến value
  printf("\nGia tri cua `value` = %d", value);
  // Thay đổi giá trị của biến value thông qua `p`
  *p = 100;
  // Lấy giá trị của biến value
  printf("\nGia tri cua `value` = %d", value);
  // Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
 
  printf("\n-------------------\n");
 
  /*
  Việc lấy giá trị của biến thông qua con trỏ 
  chỉ là 1 cách khác để lấy được giá trị của biến đó. 
  
  */
  value = 1000;
  // Lấy giá trị của biến value
  printf("\nGia tri cua `value` = %d", value);
  // Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
}

/* Cac loi thuong gap */
// int value, *p;
 
// // Sai! p cần địa chỉ cơ,
// // value không phải là cái địa chỉ đó.
// p = value;
 
// // Sai! *p là giá trị của biến mà con trỏ đang trỏ tới,
// // &value là địa chỉ.
// *p = &value;
 
// // Đúng rồi! p cần 1 địa chỉ,
// // &value là địa chỉ của biến value.
// p = &value;
 
// // Đúng! *p là giá trị của biến mà con trỏ đang trỏ tới, và
// // c cũng là giá trị (không phải địa chỉ).
// *p = value;

#include <stdio.h>
int main()
{
    int c = 5;
    // Dấu * ở đây để chúng ta biết chúng ta đang khai báo con trỏ.
    // Không phải lấy giá trị của nó nhé
    int *p = &c;
    // Khai báo trên tương đương
    // int *p;
    // p = &c;
    // Nếu bạn muốn phân biệt 2 thằng này, khi khai báo có thể viết như sau:
    // int* p = &c;
 
    // Lấy giá chỉ của biến mà con trỏ đang trỏ tới, chính là giá trị của c
    printf("%d", *p); // 5
}