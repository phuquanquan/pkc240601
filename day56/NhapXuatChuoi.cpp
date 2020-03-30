#include <stdio.h>
Khong chua dau trang.
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}

// Chua dau trang.
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    // gets(name); // không nên dùng
    printf("Name: ");
    puts(name);    // display string
    return 0;
}

/* Chương trình không cho nhập chuỗi */
// Nếu dùng fgets()
#include <stdio.h>
 
int main(){
    int age;
    char name[30];
    printf("\nNhap tuoi: "); scanf("%d", &age);
    getchar(); // đọc ký tự '\n'
    printf("\nNhap ten: "); fgets(name, sizeof name, stdin);
    printf("%s - %d", name, age);
}
 
// Nếu dùng gets()
#include <stdio.h>
 
int main(){
    int age;
    char name[30];
    printf("\nNhap tuoi: "); scanf("%d", &age);
    fflush(stdin); // đọc ký tự '\n'
    printf("\nNhap ten: "); gets(name);
    printf("%s - %d", name, age);
}