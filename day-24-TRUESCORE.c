#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int A, B, C, D;
        scanf("%d %d", &A, &B); // Read the initial scores
        scanf("%d %d", &C, &D); // Read the final scores

        // Check if the final scores can be achieved
        if (C >= A && D >= B) {
            printf("POSSIBLE\n"); // Final scores are achievable
        } else {
            printf("IMPOSSIBLE\n"); // Final scores are not achievable
        }
    }

    return 0;
}