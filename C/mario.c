#include <stdio.h>

int main(void)
{
    const int n = 3;
    // For each row
    for (int row = 0; row < n; row++)
    {
        // For each column
        for (int column = 0; column < n; column++)
        {
            // Print one brick
            printf("#");
        }
        printf("\n");
    }
}
