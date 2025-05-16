#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, t3 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n >= 1) printf("%lld ", t1);
    if (n >= 2) printf("%lld ", t2);
    if (n >= 3) printf("%lld ", t3);
    for (i = 4; i <= n; ++i) {
        nextTerm = t1 + t2 + t3;
        printf("%lld ", nextTerm);
        t1 = t2;
        t2 = t3;
        t3 = nextTerm;
    }

    return 0;
}
