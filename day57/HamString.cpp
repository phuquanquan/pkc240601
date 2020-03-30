#include <stdio.h>
#include <string.h>

// Hàm strlen – hàm lấy chiều dài chuỗi. 
int main(){
    char s[100];
    printf("\nNhap chuoi: ");
    fgets(s, sizeof s, stdin);
    printf("length = %d", strlen(s) - 1);
    printf("\nNhap chuoi: ");
    gets(s);
    printf("length = %d", strlen(s));
}

// Hàm strcmp – hàm so sánh 2 chuỗi
int main(){
    char a[] = "Hieu";
    char b[] = "Hieu";
    printf("%d, %d, %d", a, b, a == b);
}

// Hàm strcat – hàm nối chuỗi
int main ()
{
  char str[80];
  strcpy (str,"Lap ");
  strcat (str,"trinh ");
  strcat (str,"khong ");
  strcat (str,"kho!");
  puts (str);
}

// Hàm strlwr – Đưa chuỗi về dạng lowercase
int main()
{
    char str[ ] = "Lap Trinh KHONG kho!";
    printf("%s\n",strlwr (str));
}

// Hàm strupr – đưa chuỗi về dạng uppercase
int main()
{
    char str[ ] = "Lap Trinh KHONG kho!";
    printf("%s\n",strupr (str));
}

// Hàm strrev – hàm đảo ngược chuỗi
int main()
{
    char name[30] = "Nguyen Van Hieu";
 
    printf("Truoc khi dao nguoc : %s\n", name);
 
    printf("Sau khi dao nguoc   : %s", strrev(name));
 
    return 0;
}

// Hàm strchr – Trả về vị trí đầu tiên của ký tự cần tìm
int main()
{
    char string[55] = "Lap trinh khong kho";
    char *first, *last;
    first = strchr(string, 'm');
    last = strrchr(string, 'k');
    if (first != NULL)
    {
        printf("Ky tu k xuat hien lan dau tai vi tri %d\n", first - string + 1);
    }
    if (last != NULL)
    {
        printf("Ky tu k xuat hien lan dau tai vi tri %d\n", last - string + 1);
    }
}

// Hàm strstr – hàm tìm chuỗi con trong chuỗi
int main()
{
    char string[55] = "Lap trinh khong kho";
    char *first;
    first = strstr(string, "kho");
    if (first != NULL)
    {
        printf("Vi tri xuat hien dau tien cua \"kho\" trong \"%s\" la"
               " \"%s\"",
               string, first);
    }else{
        printf("Khong tim thay!\n");
    }
}