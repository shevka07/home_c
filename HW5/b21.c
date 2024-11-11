#include <stdio.h>
int main(void)
{
    char ch;
    while (ch!='.')
    {
        scanf("%c", &ch);
        if (ch!='.')
        {
            int ascii = ch;
            if ((ascii>=65)&&(ascii<=90))
            {
                ascii+= 97-65;
            }
                ch = ascii;
                printf("%c",ch);
        }
    }
    return 0;
}