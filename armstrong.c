#include <stdio.h>

int main() {
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
