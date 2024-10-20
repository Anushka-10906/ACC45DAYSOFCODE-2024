#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        long long N, A, B;
        scanf("%lld %lld %lld", &N, &A, &B);  // Read N, A, B

        // Calculate the number of rounds
        int rounds = (int)(log2(N));  // N is a power of 2, so rounds = log2(N)

        // Calculate total time
        long long totalTime = rounds * A;  // Total time for rounds
        totalTime += (rounds - 1) * B;     // Total break time (no break after the last round)

        printf("%lld\n", totalTime);  // Print result for the test case
    }

    return 0;
}