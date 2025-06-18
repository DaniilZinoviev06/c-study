#include <stdio.h>

#define LOWER 300
#define UPPER 0
#define STEP -20

void main()
{
    int fahr;
    float celsius;

    fahr = LOWER;

    printf("---------------------------\n");
    printf("%2s\t%4s\n", "F", "C");
    printf("---------------------------\n");
    for(fahr; fahr >= UPPER; fahr+=STEP){
        printf("%3d\t%0.2f\n", fahr, (5.0f/9.0f)*(fahr - 32));
    }
}
