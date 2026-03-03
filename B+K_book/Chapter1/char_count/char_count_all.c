#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
    int c, number_line, number_word, number_char, state;
    number_line = number_word = number_char = 0;
    state = OUT;

    while ((c=getchar())!=EOF)
    {
        ++number_char;

        if (c=='\n')
        {
            ++number_line;
        }
        if (c==' '||c=='\n'||c=='\t')
        {
            state = OUT;
        }
        else if (state==OUT)
        {
            state = IN;
            ++number_word;
        }
    }

    printf("%d %d %d\n", number_line, number_word, number_char);

    return 0;
}
