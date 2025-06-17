#include <stdio.h>

void main()
{
    int fahr;
    float celsius;
    int lower, upper, step;

    fahr = 300;
    upper = 0;
    step = -20;

    printf("---------------------------\n");
    printf("%2s\t%4s\n", "F", "C");
    printf("---------------------------\n");
    for(fahr; fahr >= upper; fahr+=step){
        printf("%3d\t%0.2f\n", fahr, (5.0f/9.0f)*(fahr - 32));
    }
}
