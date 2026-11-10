//21
#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(void) {
    int num;
    int count1 = 0, sum1 = 0; 
    int count2 = 0, sum2 = 0; 

    while (scanf("%d", &num) == 1 && num != 0) {
        int s = sum_of_digits(num);
        if (s % 2 == 0) {
            count1++;
            sum1 += num;
        } else {
            count2++;
            sum2 += num;
        }
    }

    printf("%d %f\n", count1, count1 > 0 ? (double)sum1 / count1 : 0.0);
    printf("%d %f\n", count2, count2 > 0 ? (double)sum2 / count2 : 0.0);

    return 0;
}
