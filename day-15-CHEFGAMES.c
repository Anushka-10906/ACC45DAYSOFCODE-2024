
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int R1, R2, R3, R4;
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4);  // Read the decisions of the referees

        // Check if all referees agree the ball is IN
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");  // All referees say IN
        } else {
            printf("OUT\n"); // At least one referee says OUT
        }
    }

    return 0;
}
