// Khong dung ham
#include <stdio.h>
int Length(char s[])
{
    int i = 0;
    while(s[i] != NULL)
    {
        i++;
    }
    return i - 1;
}

char *Daonguoc(char str[])
{
    int length = Length(str);
    char *temp = new char[length + 1];
    for (int i = 0; i < length; i++)
    {
        temp[i] = str[length - 1 - i];
    }
    temp[length] = NULL;
    return temp;
}

void PrintDaoNguoc(char str[])
{
    int length = Length(str);
    printf("\nChuoi so dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    
}

int main()
{
    char str[100];
    printf("\nNhap chuoi: ");
    fgets(str, 100, stdin);
    char *kq = Daonguoc(str);
    PrintDaoNguoc(str);
    printf("\nChuoi so sau khi dao nguoc la: %s", kq);
    return 0;
}