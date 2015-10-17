/**
*
*PSET 1.2 - GREEDY
*
*Gives a certain amount of change with the fewest coins possible
*
*
*/


#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    float dollars = 0;
    int num_Of_Coins = 0;
    int int_Cents = 0;
    
    //takes an input from the user
    do
    {
        printf("O hai! How much change is owed?\n");
        dollars = GetFloat();     
    }
    while (dollars < 0);

    dollars = round(dollars * 100);
    
    int_Cents = dollars;
    
    //while loop for subtracting
    while (int_Cents >= 25)
    {
        num_Of_Coins++;
        int_Cents = int_Cents - 25;
    }
    
    while (int_Cents >= 10)
    {
        num_Of_Coins++;
        int_Cents = int_Cents - 10;
    }
    
    while (int_Cents >= 5)
    {
        num_Of_Coins++;
        int_Cents = int_Cents - 5;
    }
    
    while (int_Cents >= 1)
    {
        num_Of_Coins++;
        int_Cents = int_Cents - 1;
    }
    
    printf("%i\n", num_Of_Coins);
    return 0;
}









