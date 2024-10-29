
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false; // 1 is not prime
    if (n <= 3) return true; // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false; // eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        if (is_prime(N)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}