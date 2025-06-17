#include <stdio.h>

void main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        celsius = (5.0f/9.0f)*(fahr - 32);
        printf("%0.0f\t%0.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    fahr = 0.0;
    printf("---------------------------\n");
    printf("%2s\t%4s\n", "F", "C");
    printf("---------------------------\n");
    for(fahr; fahr <= upper; fahr+=step){
        celsius = (5.0f/9.0f)*(fahr - 32);
        printf("%0.0f\t%0.2f\n", fahr, celsius);
    }
}
