// Take an integer input between 1-8 inclusive and create a two-sided pyramid of #'s
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height_input;
    do
    {
        height_input = get_int("Height:\n ");
    }
    while (height_input < 1 || height_input > 8);

    for (int i = 0; i < height_input; i++)
    {
        string blocks = "#";
        string spaces = " ";

        for (int j = i + 1; j < height_input; j++)
        {
            printf("%s", spaces);
        }

        for (int k = height_input - i; k <= height_input; k++)
        {
            printf("%s", blocks);
        }

        printf("%s%s", spaces, spaces);

        for (int l = height_input - i; l <= height_input; l++)
        {
            printf("%s", blocks);
        }
        printf("\n");
    }
}
