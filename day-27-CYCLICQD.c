#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read number of test cases
    
    // Process each test case
    for (int i = 0; i < T; i++) {
        int A, B, C, D;  // Angles of the quadrilateral
        scanf("%d %d %d %d", &A, &B, &C, &D);  // Read the four angles
        
        // Check if the quadrilateral is cyclic
        if (A + C == 180 && B + D == 180) {
            printf("YES\n");  // It is a cyclic quadrilateral
        } else {
            printf("NO\n");  // It is not a cyclic quadrilateral
        }
    }
    
    return 0;
}