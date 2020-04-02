#include <stdio.h>
#include <string.h>

char KiemTra(char s[], char c)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(c == s[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char s[100];
    char c;
    printf("\nNhap chuoi: ");
    fgets(s, sizeof s, stdin);
    printf("\nNhap ki tu can tim: ");
    scanf("%c", &c);

    int k = KiemTra(s, c);
    if(k == 0)
    {
        printf("\nKhong co ki tu %c trong chuoi.", c);
    } else
    {
        printf("\n%c xuat hien %d lan trong chuoi.", c, k);
    }
}