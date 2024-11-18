#include <math.h>
#include <stdio.h>
#define PI 3.14159265
int factorial(int n)
{
    int p = 1;
    for (int i=1; i<=n; i++)
    {
        p*= i;
    }
    return p;
}
float cosinus(float x)
{
    
    float Rez = 0;
    float Rez_old = Rez;
    int i = 0;
    do
    {
        Rez_old = Rez;
        Rez+= pow(-1,i)*pow(x,2*i)/factorial(2*i);
        i++;
    } while (fabs(Rez-Rez_old)>=0.001);
    return Rez;
}

int main()
{
    float x;
    scanf("%f", &x);
    x = x*PI/180;
    printf("%.3f", cosinus(x));
    return 0;
}
