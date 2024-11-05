#include <stdio.h>

int main() {
    int T, N;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int i = 0; i < T; i++) {
        // Read the number of bits taken by the program
        scanf("%d", &N);
        
        // Check if N is divisible by 4
        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }
    
    return 0;
}

