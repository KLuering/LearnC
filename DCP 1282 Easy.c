#include <stdio.h>

int nth_perfect_number() {
    int n, i = 10, count = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    while (1) {
        int temp = i;
        int digit_sum = 0;
        while (temp) {
            digit_sum += temp % 10;
            temp /= 10;
        }
        if (digit_sum == 10) {
            count++;
            if (count == n) {
                return i;
            }
        }
        i++;
    }
}

int main() {
    while (1) {
        int result = nth_perfect_number();
        printf("%d\n", result);
        char repeat[4];
        printf("Do you want to find another perfect number? (y/n)");
        scanf("%s", repeat);
        if (repeat[0] != 'y') {
            break;
        }
    }
    return 0;
}
