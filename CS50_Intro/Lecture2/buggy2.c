#include <stdio.h>
#include <cs50.h>

int get_negative_int(void);

int main(void)
{
    int i=get_negative_int();
    printf("i: %i\n",i);
}

int get_negative_int(void)
{
    int i;
    do
    {
        i =get_int("Negative integer: ");
    }
    while (i < 0);
    return i;
}
