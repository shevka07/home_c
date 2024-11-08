#include <stdio.h>
int main(void)
{
    int X1, Y1, X2, Y2;
    float K,B;
        scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
        K = ((float)Y2-(float)Y1)/((float)X2-(float)X1);
        B = (float)Y1 - K*(float)X1;
    printf("%.2f %.2f\n", K, B);
    return 0;
}