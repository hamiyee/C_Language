#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;
    int space_number = 0;
    int tab_number = 0;
    int line_number = 0;

    while ((count = getchar()) != EOF)
    {
        if (count == ' ')
            ++space_number;
        else if (count == '\t')
            ++tab_number;
        else if (count == '\n')
            ++line_number;
    }

    printf("space number:%d\ntab number: %d\nline number: %d\n", space_number, tab_number, line_number);

    return 0;
}
