#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            putchar(' ');
        }
    }

    return 0;
}
