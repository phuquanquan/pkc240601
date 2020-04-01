#include <stdio.h>
#include <string.h>

int WordCount(char str[], int length)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < length - 1; i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}

void Correct(char str[], int length)
{
    int first = 0, last = length - 1;
    while (first < last && str[first] == ' ')
    {
        first++;
    }

    while (first < last && str[last] == ' ')
    {
        last--;
    }

    if (str[first] >= 'a' && str[first] <= 'z')
    {
        str[first] -= 32;
    }
    printf("%c", str[first]);
    for (int i = first + 1; i <= last; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if ( i + 1 <= last)
        {
            if(str[i] == str[i + 1] && str[i] == ' ')
            {
                continue;
            }

            if(str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
        }
        printf("%c", str[i]);
    }
    
}

int main()
{
    char str[100];
    printf("\nNhap chuoi: ");
    fgets(str, sizeof str, stdin);
    int lenghth = strlen(str) - 1;
    str[lenghth] = '\0';
    printf("So tu cua \"%s\" la %d ", str, WordCount(str, lenghth));
    printf("\nXau chuan hoa la: ");
    Correct(str, lenghth);
}