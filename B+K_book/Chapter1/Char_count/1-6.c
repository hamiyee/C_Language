#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (getchar()!=EOF)
    {
        printf("It's value is 1.\n");
        printf("The value of EOF is %d.\n", EOF);
    }
    else
    {
        printf("It's value is 0.\n");
    }

    return 0;
}
