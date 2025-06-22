#include <stdio.h>

int main() {
    int c;
    int c_count = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ') {
            c_count++;

            if (c_count >= 2) putchar(' ');

            //if (c_count <= 1) putchar(c);

        } else {
            c_count = 0;
            putchar(c);
        }
    }
}
