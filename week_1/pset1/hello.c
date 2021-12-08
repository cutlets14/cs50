#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for the user's name!
    string string_answer = get_string("What's your name? ");
    printf("hello, %s\n", string_answer);

}