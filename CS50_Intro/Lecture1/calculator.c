#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt user for X
     long x=get_int("X: ");

     //Prompt user for Y
     long y=get_int("Y: ");

     //Perform addition
     printf("%li\n",x+y);

}