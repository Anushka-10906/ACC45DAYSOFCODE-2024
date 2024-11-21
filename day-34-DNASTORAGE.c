#include <stdio.h>
#include <string.h>

void encodeDNA(char *S, int N) {
    // Iterate through the string two characters at a time
    for (int i = 0; i < N; i += 2) {
        // Check each pair of bits and print the corresponding DNA sequence
        if (S[i] == '0' && S[i+1] == '0') {
            printf("A");
        } else if (S[i] == '0' && S[i+1] == '1') {
            printf("T");
        } else if (S[i] == '1' && S[i+1] == '0') {
            printf("C");
        } else if (S[i] == '1' && S[i+1] == '1') {
            printf("G");
        }
    }
    printf("\n");
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;  // Length of binary string
        scanf("%d", &N);
        
        char S[N + 1];  // Binary string (we add 1 to accommodate null terminator)
        scanf("%s", S);
        
        encodeDNA(S, N);  // Encode and print the result
    }

    return 0;
}