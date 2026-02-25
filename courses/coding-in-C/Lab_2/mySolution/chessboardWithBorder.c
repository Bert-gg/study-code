#include <stdio.h>

int main(void)
{
    const int row = 8;
    char col[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    
    printf(" ");
    for (int file = 0; file <= 7; file++)
    {
        printf("   %c", col[file]);
    }
    printf("\n");

    for (int i = row; i > 0; i--)
    {
        printf("  +");
        for (int k = 0; k <= 7; k++)
        {
            printf("---+");
        }
        printf("\n");
        
        printf("%d |", i);
        for (int j = 1; j <= row; j++)
        {
            if (((j + i) % 2) > 0)
            {
                printf("###|");
            }
            else
            {
                printf("   |");
            }
        }
        printf(" %d\n", i);
    }

    printf("  +");
    for (int k = 0; k <= 7; k++)
    {
        printf("---+");
    }
    printf("\n");

    printf(" ");
    for (int file = 0; file <= 7; file++)
    {
        printf("   %c", col[file]);
    }
    printf("\n");

    return 0;
}
