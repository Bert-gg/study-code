#include <stdio.h>

int main(void)
{
    for(int row = 8; row >= 1; row--)
    {
        for(char col = 'A'; col <= 'H'; col++)
        {
            printf("%c%d ", col, row);
        }
        printf("\n");
    }
    return 0;
}