#include <stdio.h>

int main() {
    int T, X, Y;

    // Read the number of test cases
    scanf("%d", &T);

    while (T--) {
        // Read the time taken for BIKE and CAR
        scanf("%d %d", &X, &Y);

        // Determine which is faster or if they are the same
        if (X < Y) {
            printf("BIKE\n");
        } else if (X > Y) {
            printf("CAR\n");
        } else {
            printf("SAME\n");
        }
    }

    return 0;
}