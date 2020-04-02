#include <stdio.h>
#include <string.h>

char DoiXung(char s[])
{
    int i;
    for ( i = 0; i < strlen(s) / 2; i++)
    {
        if(s[i] != s[strlen(s) - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[100];
    printf("\nNhap chuoi: ");
    fgets(s, sizeof s, stdin);

    int k = DoiXung(s);
    if(k == 0)
    {
        printf("\nChuoi khong doi xung!");
    } else
    {
        printf("\nChuoi doi xung!");
    }
}