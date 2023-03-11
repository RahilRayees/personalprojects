#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Naming the variables:
    int start_population, end_population, n;

    // Asking user for starting population.
    do
    {
        start_population = get_int("Start size: ");
    }
    while (start_population < 9);

    // Asking user for the end population:
    do
    {
        end_population = get_int("End size: ");
    }
    while (end_population < start_population);

    int current_population = start_population;
    n = 0;
    // Calculating the no of years required for end population growth.
    while (current_population < end_population)
    {
        int i = current_population / 3;
        int j = current_population / 4;

        current_population = current_population + i - j;

        n++;
    }

    printf("Years: %i\n", n);
}
