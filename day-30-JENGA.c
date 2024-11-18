
#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X); // Read N (number of players) and X (number of tiles)
        
        // Check if X is divisible by N (i.e., each player gets one tile in each round)
        if (X % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}