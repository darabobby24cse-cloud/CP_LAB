#include <stdio.h>
int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main() {
    long long A, B, T;
    scanf("%lld %lld %lld", &A, &B, &T);
    if (T <= (A > B ? A : B) && T % gcd(A, B) == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
