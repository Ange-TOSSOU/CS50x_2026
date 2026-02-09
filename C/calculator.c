#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long dollars = 1;
    while (true)
    {
        char c = get_char("Here's $%li. Double it and give to next person ? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

    float x = get_int("What's x ? ");
    float y = get_int("What's y ? ");

    printf("%0.50f\n", x / y);
}
