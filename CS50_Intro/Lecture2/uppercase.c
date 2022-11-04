#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int string_length(string s);

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for(int i=0, n=strlen(s); i<n;i++)
    {
        printf("%c",toupper(s[i]));
    }
     printf("\n");
}