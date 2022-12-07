#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    while (true)
    {
        n = get_int("Height: ");
        if (n > 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            printf(" ");
        }
        for (int k = n-i; k <= n; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}