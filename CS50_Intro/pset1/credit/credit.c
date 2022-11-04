#include <cs50.h>
#include <stdio.h>

int checksum(long card_number);
string check_card_type(int first_digit, int second_digit, int length);

int main(void)
{
    long card_number = get_long("Your card number: ");

    if (checksum(card_number) == 1)
    {
        int first_digit = 0;
        int second_digit = 0;
        int length = 0;

        while (card_number > 0)
        {
            second_digit = first_digit;
            first_digit = card_number % 10;
            length += 1;
            card_number /= 10;
        }

        string card_type = check_card_type(first_digit, second_digit, length);

        printf("%s\n", card_type);

    }
    else
    {
        printf("INVALID\n");
    }
}

int checksum(long card_number)
{
    long multiplied = card_number / 10;
    int first_sum=0;
    int second_sum=0;

    while (multiplied > 0)
    {
        int last_digit = multiplied % 10;

        if (last_digit * 2 > 9)
        {
            first_sum += ((last_digit * 2) % 10) + (last_digit * 2) / 10 % 10;
        }
        else
        {
            first_sum += last_digit * 2;
        }
        multiplied /= 100;
    }

    while (card_number > 0)
    {
        int last_digit = card_number % 10;
        second_sum += last_digit;
        card_number /= 100;
    }

    if ((first_sum + second_sum) % 10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string check_card_type(int first_digit, int second_digit, int length)
{
    if ((length == 15) && (first_digit == 3) && ((second_digit == 4) || (second_digit == 7)))
    {
        return "AMEX";
    }
    else if ((length == 16) && (first_digit == 5) && ((second_digit == 1) || (second_digit == 2) || (second_digit == 3)
            || (second_digit == 4) || (second_digit == 5)))
    {
        return "MASTERCARD";
    }
    else if (((length == 13) || (length == 16)) && (first_digit == 4))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}
