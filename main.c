#include <stdio.h>

int sum(int, int);

int main(void) {
    printf("Hello Wold\n");

    int min, max, value;
    printf("Enter 2 numbers separated by , : ");
    scanf("%d,%d", &min, &max);
    value = sum(min, max);
    printf("Result is %d", value);
    return 0;
}

int sum(int min, int max) {
    int i, sum = 0;
    for (i = min; i <= max; i++) {
        sum += i;
    }
    return sum;
}