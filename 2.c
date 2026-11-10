//15
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wint_t wc;
    int count = 0;

    while ((wc = getwchar()) != L'#') {
        if (iswcntrl(wc)) {
            count++;
        }
    }

    wprintf(L"%d\n", count);

    return 0;
}
