//1
#include <stdio.h>

int main(void) {
    int vibor;
    int run = 1;
    double temp, conv;

    while (run) {
        printf("1. C -> F\n");
        printf("2. F -> C\n");
        printf("3. C -> K\n");
        printf("4. K -> C\n");
        printf("5. Exit\n");

        if (scanf("%d", &vibor) != 1) {
            printf("Ошибка\n");
            while (getchar() != '\n');
            continue;
        }

        switch (vibor) {
            case 1:
                if (scanf("%lf", &temp) == 1) {
                    conv = (temp * 9.0 / 5.0) + 32.0;
                    printf("%.2f\n", conv);
                }
                break;
            case 2:
                if (scanf("%lf", &temp) == 1) {
                    conv = (temp - 32.0) * 5.0 / 9.0;
                    printf("%.2f\n", conv);
                }
                break;
            case 3:
                if (scanf("%lf", &temp) == 1) {
                    conv = temp + 273.15;
                    printf("%.2f\n", conv);
                }
                break;
            case 4:
                if (scanf("%lf", &temp) == 1) {
                    conv = temp - 273.15;
                    printf("%.2f\n", conv);
                }
                break;
            case 5:
                run = 0;
                break;
            default:
                printf("Ошибка\n");
                continue;
        }
    }

    return 0;
}
