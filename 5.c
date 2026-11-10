//1
#include <stdio.h>

int main(void) {
    int choice;
    double temp, converted;

    while (1) {
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            continue; 
        }

        if (choice == 5) {
            break; 
        }

        switch (choice) {
            case 1:
                scanf("%lf", &temp);
                converted = (temp * 9.0 / 5.0) + 32.0;
                printf("%.2f\n", converted);
                break;
            case 2:
                scanf("%lf", &temp);
                converted = (temp - 32.0) * 5.0 / 9.0;
                printf("%.2f\n", converted);
                break;
            case 3:
                scanf("%lf", &temp);
                converted = temp + 273.15;
                printf("%.2f\n", converted);
                break;
            case 4:
                scanf("%lf", &temp);
                converted = temp - 273.15;
                printf("%.2f\n", converted);
                break;
            default:
                continue;
        }
    }

    return 0;
}
