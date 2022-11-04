#include <stdio.h>
#include <cs50.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");

    int length=string_length(name);

    int length2=strlen(name);

    printf("Length: %i\n",length);
    printf("Length2: %i\n",length2);
}


int string_length(string s)
{
    int i=0;

    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}