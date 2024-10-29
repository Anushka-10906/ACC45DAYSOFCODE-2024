#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);
        
        int count = 0; // count of Wolverine-like minions
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);
            
            // Calculate the new characteristic value
            int newCharacteristic = characteristic + K;
            
            // Check if the new value is divisible by 7
            if (newCharacteristic % 7 == 0) {
                count++;
            }
        }
        
        // Output the count of Wolverine-like minions
        printf("%d\n", count);
    }
    
    return 0;
}

