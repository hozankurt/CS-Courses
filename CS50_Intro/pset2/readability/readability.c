#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentence(string text);

int main(void)
{
    string text = get_string("Text: ");

    int cnt_let = count_letters(text);
    int cnt_word = count_words(text);
    int cnt_sen = count_sentence(text);

    float L = (float)cnt_let / (float)cnt_word * 100;
    float S = (float)cnt_sen / (float)cnt_word * 100;

    int index = (int)round(0.0588 * L - 0.296 * S - 15.8);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}


int count_letters(string text)
{
    int count = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            count += 1;
        }
    }
    return count;
}


int count_words(string text)
{
    int count = 1;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count += 1;
        }
    }
    return count;
}

int count_sentence(string text)
{
    int count = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count += 1;
        }
    }
    return count;
}