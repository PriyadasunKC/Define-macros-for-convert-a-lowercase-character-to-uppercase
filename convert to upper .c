#include <stdio.h>
#define check(c) (c - 'a' + 'A')

int main()
{

    char ch;
    char uCh;
    printf("Enter lowercase letter : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        uCh = check(ch);
        printf("Uppercase : %c", uCh);
    }
    else
    {
        printf("Incorret input!");
    }
    return 0;
}
