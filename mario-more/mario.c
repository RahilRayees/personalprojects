#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Getting Height:
    unsigned int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8);

    // Printing Pyramid:
    for (int i = 0; i < height; i++)
    {
        for (int z = 0; z < height - i - 1; z++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j ++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i + 1; j ++)
        {
            printf("#");
        }
        printf("\n");
    }
}