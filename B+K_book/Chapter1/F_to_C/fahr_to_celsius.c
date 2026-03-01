#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /*最低温度*/
    upper = 300; /*最高温度*/
    step = 20;   /*温度变化*/

    fahr = lower;
    printf("%3s%9s\n", "fahr", "celsius");
    while (fahr <= upper)
    {
        celsius = 5.0 / 9 * (fahr - 32);
        printf("%3.0f%9.1f\n", fahr, celsius);  
        fahr += step;
    }

    return 0;
}