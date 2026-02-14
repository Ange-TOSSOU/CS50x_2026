#include <cs50.h>
#include <stdio.h>

#define MIN_HEIGHT 1
#define MAX_HEIGHT 8

#define GAP 2

void print_left(int, int);
void print_right(int);
void print_middle(int);

int main(void)
{
    int pyramid_height;
    do
    {
        pyramid_height = get_int("Height: ");
    }
    while (pyramid_height < MIN_HEIGHT || pyramid_height > MAX_HEIGHT);

    // Print a pyramid of that height.
    int number_of_bricks, number_of_spaces;
    for (int row = 0; row < pyramid_height; row++)
    {
        number_of_bricks = row + 1;
        number_of_spaces = pyramid_height - number_of_bricks;

        print_left(number_of_spaces, number_of_bricks);
        print_middle(GAP);
        print_right(number_of_bricks);

        printf("\n");
    }
}

void print_left(int spaces, int bricks)
{
    int i;

    // Print the empty space(s) before the brick(s).
    for (i = 0; i < spaces; i++)
        printf(" ");

    // Print the brick(s).
    for (i = 0; i < bricks; i++)
        printf("#");
}

void print_right(int bricks)
{
    // Print the brick(s).
    for (int i = 0; i < bricks; i++)
        printf("#");
}

void print_middle(int gap)
{
    for (int i = 0; i < gap; i++)
        printf(" ");
}
