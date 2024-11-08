#include <stdio.h>
int main(void)
{
    int m;
        scanf("%d", &m);
        if ((m>=3)&(m<6))
        printf("spring\n");
        if ((m>6)&(m<9))
        printf("summer\n");
        if ((m>=9)&(m<12))
        printf("autumn\n");
        if (((m>=1)&(m<3))||(m==12))
        printf("winter\n");
    return 0;
}