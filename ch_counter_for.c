#include <stdio.h>

int main() {

    long nc;

    for(nc = 0; getchar() != EOF; ++nc)
        ;

    printf("\n-- %d --\n", nc);

}
