#include <stdio.h>

int main() {
    long nc = 0;

    while((getchar()) != EOF)
        ++nc;

    printf("\n-- %d --\n", nc);
}
