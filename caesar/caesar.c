#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{

    // Checking whether key is correct:
    if( argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // getting the Key(k):
    string key = argv[1];
    int k = atoi(key);

    // Is key a digit!
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Getting plaintext:
    string plaintext = get_string("Plaintext: ");
    // Outputing ciphertext:
    printf("ciphertext: ");

    // Obtaining ciphertext:
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c",(((plaintext[i] - 65) + k) % 26) +65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c",(((plaintext[i] - 97) + k) % 26) +97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}

