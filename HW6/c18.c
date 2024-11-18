#include <stdio.h>
int is_digit(char c)
{
    int inc;
    if ((c>='0')&&(c<='9'))
        {
            inc = 1;
        }
    else
        {
            inc = 0;
        }
    return inc;
}

int main()
{
    char ch;
    int qw = 0;
    do
    {
        scanf("%c", &ch);
        qw+= is_digit(ch);
    } while (ch!='.');
    printf("%d", qw);
}
