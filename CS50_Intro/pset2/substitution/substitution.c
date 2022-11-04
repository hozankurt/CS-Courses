#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_key(string key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        if (check_key(argv[1]) == 1)
        {
            string ptext = get_string("plaintext: ");
            printf("ciphertext: ");

            for (int i = 0; i < strlen(ptext); i++)
            {
                if (isalpha(ptext[i]))
                {
                    if (isupper(ptext[i]))
                    {
                        printf("%c", toupper(argv[1][(int)ptext[i] - 65]));
                    }
                    else
                    {
                        printf("%c", tolower(argv[1][(int)ptext[i] - 97]));
                    }
                }
                else
                {
                    printf("%c", ptext[i]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}

int check_key(string key)
{
    if (strlen(key) == 26)
    {
        for (int i = 0; i < strlen(key); i++)
        {
            if (!(isalpha(key[i])))
            {
                return 0;
            }

            for (int j = i + 1; j < strlen(key); j++)
            {
                if (key[i] == key[j])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}