#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count, line_number=0;

    while ((count = getchar()) != EOF)
    {
        if (count == '\n')
        {
            ++line_number;
        }
    }

    printf("%d\n", line_number);

    return 0;
}
