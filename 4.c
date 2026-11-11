//27
#include <stdio.h>

int main(void) {
    double dohod;
    double nalog = 0.0;
    double s1 = 0.0, s2 = 0.0, s3 = 0.0;

    if (scanf("%lf", &dohod) == 1 && dohod >= 0){
        if (dohod <= 500.0) {
            s1 = dohod * 0.10;
        } else if (dohod <= 1000.0) {
            s1 = 500.0 * 0.10;
            s2 = (dohod - 500.0) * 0.15;
        } else {
            s1 = 500.0 * 0.10;
            s2 = 500.0 * 0.15;
            s3 = (dohod - 1000.0) * 0.20;
        }

        nalog = s1 + s2 + s3;

        printf("%.2f\n", dohod);
        printf("%.2f %.2f %.2f\n", s1, s2, s3);
        printf("%.2f\n", nalog);
    }
    return 0;
}
