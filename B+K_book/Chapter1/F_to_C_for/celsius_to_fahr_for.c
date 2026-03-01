#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float fahr, celsius;

    printf("%3s%9s\n", "fahr", "celsius");
    for (int i = UPPER; i >= 0; i -=STEP)
    {
        celsius = 5.0 / 9 * (i - 32);
        printf("%3d%9.1f\n", i, celsius);  

    }

    return 0;
}