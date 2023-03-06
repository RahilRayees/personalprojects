#include <cs50.h>
#include <stdio.h>

int main(void)
{
    unsigned int height;
    do
    {
        // Asking user for height:
        height = get_int("Height: ");
    }
    while (height > 8); // Asking height till user provides it b/w 1 and 8

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (int z = 0; z < i + 1; z++)
        {
            printf("#");
        }
        printf("\n");
    }

}