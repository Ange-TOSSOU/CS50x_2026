#include <cs50.h>
#include <stdio.h>

#define MIN_HEIGHT 1

void print_row(int, int);

int main(void)
{
    int pyramid_height;
    do
    {
        pyramid_height = get_int("Height: ");
    }
    while (pyramid_height < MIN_HEIGHT);

    // Print a pyramid of that height.
    int number_of_bricks, number_of_spaces;
    for (int row = 0; row < pyramid_height; row++)
    {
        number_of_bricks = row + 1;
        number_of_spaces = pyramid_height - number_of_bricks;

        print_row(number_of_spaces, number_of_bricks);
    }
}

void print_row(int spaces, int bricks)
{
    int i;

    // Print the empty space(s) before the brick(s).
    for (i = 0; i < spaces; i++)
        printf(" ");

    // Print the brick(s).
    for (i = 0; i < bricks; i++)
        printf("#");

    printf("\n");
}
