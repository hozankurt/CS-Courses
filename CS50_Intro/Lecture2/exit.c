#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    if (argc!=2)
    {
        printf("Missing command-line argument\n");
        return 1; //bir şeyin yanlış gittiği anlamına geliyor, koddan çıkıyor.
    }

    printf("Hello, %s\n",argv[1]);
    return 0; //0 dönmesi hatasız bittiği anlamına geliyor, yine koddan çıkıyor.
}