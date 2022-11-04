#include <stdio.h>

void meow(n)
{
    for (int i=0;i<n;i++)
    {
        printf("meow!\n");
    }

//using while
//    int i=0;
//    while (i<n)
//    {
//        printf("meow!\n");
//        i++;
//    }

}

int main(void)
{
    meow(4);
}
