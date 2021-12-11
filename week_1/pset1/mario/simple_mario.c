#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declare user input
    int input;
    do
    {
        // Get user input for wall height
        input = get_int("Height: ");
    }
    while ((int) input > 8 || (int) input < 1);

    // If wall height is a valid input, store in stored
    //printf("Stored: %i", input);
    //printf("\n");

    // Print the user's input to test
    // printf("The user's input is %i:", input);

    // Build for loops to print things to the screen
    for (int i = 0; i < input; i++)
    {
        // Print dots before hashes
        for (int d = 0; d < input - i - 1; d++)
        {
            printf(" ");
        }

        // Print hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}