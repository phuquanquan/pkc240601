#include <stdio.h>
#include <string.h>

void to_lower(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
}

void to_upper(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
}

void to_title(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i - 1] == ' ' || i == 0)
        {
            s[i] -= 32;
        }
    }
}

int main()
{
    char s[100];
    printf("\nNhap chuoi: ");
    fgets(s, sizeof s, stdin);
    int n;
    printf("\nNhap lua chon(Hoa all: 1, thuong all: 2, chuan hoa: 3): ");
    
    do
    {
        scanf("%d", &n);
        if(n != 1 || n != 2 || n != 3)
        {
            printf("\nAgain.");
        }
    } while (n != 1 || n != 2 || n != 3);
    

    if(n == 1)
    {
        to_lower(s);
        printf("\nChuoi sau khi thuc hien thay doi la: %s", s);
    } else if(n == 2)
    {
        to_upper(s);
        printf("\nChuoi sau khi thuc hien thay doi la: %s", s);
    } else
    {
        to_upper(s);
        to_title(s);
        printf("\nChuoi sau khi thuc hien thay doi la: %s", s);
    }
}