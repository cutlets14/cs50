#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int starting_pop;
    // do-while loop to ask for user input until starting_pop >= 9
    do
    {
        starting_pop = get_int("Please enter a positive integer for the starting population: ");
    }
    while (starting_pop < 9);

    //printf("This is the starting population: %i\n", starting_pop);

    // TODO: Prompt for end size
    //do-while loop to ask for user input until ending_pop >= starting_pop
    int ending_pop;
    do
    {
        ending_pop = get_int("Please enter a positive integer for the end population: ");
    }
    while (ending_pop < starting_pop);

    //printf("This is the ending population: %i\n", ending_pop);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    // Initialize and assign value to curr_pop
    int curr_pop = starting_pop;
    if (curr_pop == ending_pop)
    {
        years = 0;
    }
    else
    {
        do
        {
            // Cast output to int before performing arithmetic
            curr_pop = curr_pop + (int)(curr_pop / 3) - (int)(curr_pop / 4);
            years++;
        }
        while (curr_pop < ending_pop);
    }


    // TODO: Print number of years
    printf("Years: %i\n", years);
}