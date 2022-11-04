#include <stdio.h>
#include <cs50.h>

float discount(float price,int percentage);

int main(void)
{
   float regular=get_float("Regular Price: ");
   int percentage=get_int("Get percentage:");
   float sale=discount(regular,percentage);
   printf("Sale Price is %.2f\n",sale);
}

float discount(float price,int percentage)
{
    return price*(100-percentage)/100;
}