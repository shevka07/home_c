#include <stdio.h>
char lowToUp(char ch) 
{
    if((ch>='a')&&(ch<='z'))
    ch = 'A'+ ch -'a';
    return ch;
}
int main()
{
    char str[100];
    int i = 0;
    char ch;
    scanf("%c", &ch);
    while (ch!='.')
    {
        str[i] = ch;
        i++;
        scanf("%c", &ch);
    }
    int N=i;
    for(i = 0; i<=N-1 ; i++) 
    {
        str[i] = lowToUp(str[i]);
    }
    printf("%s", str);
    return 0;
}
