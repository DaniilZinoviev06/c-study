#include <stdio.h>

int main() {
    int c, nl = 0,
        nt = 0, ns = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') ++nl;
        else if (c == '\t') ++nt;
        else if (c == ' ') ++ns;
    }

    printf("\nСтрок -- %d --\n\nТабуляция -- %d --\n\nПробелов -- %d --\n",
           nl, nt , ns);

    return 0;
}
