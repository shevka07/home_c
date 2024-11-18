#include <stdio.h>
int digit_to_num(char c)
{
    int inc;
    if ((c>='0')&&(c<='9'))
        {
            inc = c-'0';
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
    int sum = 0;
    do
    {
        scanf("%c", &ch);
        sum+= digit_to_num(ch);
    } while (ch!='.');
    printf("%d", sum);
    return 0;
}
