#include <stdio.h>

int main(int argc, char const *argv[])
{
    long count;

    for (count = 0; getchar() != EOF;++count)
        ;
    printf("count number: %ld\n", count);

    return 0;
}
