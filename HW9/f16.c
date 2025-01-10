#include <stdio.h>

int get_cell_color(const char *coord) 
{    
    int col = coord[0] - 'A'; 
    int row = coord[1] - '1'; 

    if ((col + row) % 2 == 0) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}


int main() 
{
    char coord[2];
    scanf("%c",&coord[0]);
    scanf("%c",&coord[1]);
    int color = get_cell_color(coord);
    if (color == 1) 
    {
        printf("BLACK\n", coord);
    } 
    else
    {
        printf("WHITE\n", coord);
    }
}