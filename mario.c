/*
*
* PSET 1: MARIO
*
* Charisse
*
* Builds a half pyramid according to the user's height input
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{       
    int height = 0;
    int space = 0;
    int hash = 0;
    
    //asks the user for an input
    do
    {
        printf("Give me a number between 0 and 23: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    //Loop for the half pyramid
    for (int row = 0; row < height; row++) 
    {
        //loop for the spaces
        for (space = height - 1 - row; space > 0; space--)
        {
            printf(" ");
        }
        
        //loop for the hash
        for (hash = -2; hash < row; hash++)
        {
            printf("#");       
        }
        
        printf("\n");                                     
    }

    return 0;
}
