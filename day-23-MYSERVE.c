#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    
    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q); // Read the scores of Alice and Bob
        
        int total_points = P + Q; // Calculate the total points scored
        int serve_number = total_points + 1; // Calculate the serve number (1-based)
        
        // Determine whose serve it is
        if ((serve_number - 1) / 2 % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}