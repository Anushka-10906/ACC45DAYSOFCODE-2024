
#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Number of terms in the polynomial
        scanf("%d", &N);

        int degree = -1; // Initialize degree
        int coefficient;

        // Read coefficients and determine the degree
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficient);
            if (coefficient != 0) {
                degree = i; // Update degree if the coefficient is non-zero
            }
        }

        // Output the degree of the polynomial
        printf("%d\n", degree);
    }

    return 0;
}