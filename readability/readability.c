#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// prototypes for funtions:
string get_text(void);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);



int main(void)
{
    // Getting text from user:
    string text = get_text();

    // Getting letters in Text:
    int letters = count_letters(text);

    // Getting words in Text:
    int words = count_words(text);

    // Getting sentences in a text:
    int sentences = count_sentences(text);

    // Colman-liau formula:
    float index = 0.0588 * (100 * letters / words) - 0.296 * (100 * sentences / words) - 15.8;

    // Grade level:
    if ( index >= 1 && index <= 16 )
    {
        printf("Grade %.0f\n", index);
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade 16+\n");
    }


}

// Defining Functions:

// Getting text from user:
string get_text(void)
{
    return get_string("Text: ");
}

// No of words in text:
int count_letters(string text)
{
    int letters_in_text = strlen(text);
    int letters = 0;
    for (int i = 0; i < letters_in_text; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            letters ++;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            letters++;
        }
    }
    return letters;
}

// Counting Words in a text:
int count_words(string text)
{
    int letters_in_text = strlen(text);
    int words = 1;

    for (int i = 0; i < letters_in_text; i++)
    {
        if (text[i] == 32 )
        {
            words++;
        }
    }
    return words;

}

// Getting sentences in a text:
int count_sentences(string text)
{
    int sentences = 0;

    for (int i = 0, s = strlen(text); i < s; i++)
    {
        if (text[i] == 33 || text[i] == 63 || text[i] == 46)
        {
            sentences++;
        }
    }

    return sentences;
}
