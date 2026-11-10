//23
#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int prev = 0;
    int count = 0;

    while ((ch = getchar()) != '#') {
        if (prev == 'i' && ch == 'f') {
            count++;
        }
        prev = ch;
    }

    printf("%d\n", count);

    return 0;
}
