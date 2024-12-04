#include <stdio.h>
int max_find(int max) 
{
    int num;
    if (scanf("%d", &num) == 1) 
    {
        if (num == 0) {
            return max;
        } 
        else 
        {
            if (max == 0) 
            {
                max = num;
            }
            else if (num > max) 
            {
                max = num;
            }
            return max_find(max);
        }
    } 
    else 
    {
        return max;
    }
}

int main()
{
    int result = max_find(0);
    printf("%d\n", result);
    return 0;
}