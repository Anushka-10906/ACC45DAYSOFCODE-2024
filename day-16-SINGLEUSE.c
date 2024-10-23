
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);

        // Option 1: Only normal attacks
        int normalAttacks = (H + X - 1) / X; // Equivalent to ceil(H / X)

        // Option 2: Use special attack first
        int healthAfterSpecial = H - Y;
        int specialAttackCount = 1; // One special attack
        if (healthAfterSpecial > 0) {
            // Calculate remaining normal attacks needed
            specialAttackCount += (healthAfterSpecial + X - 1) / X; // Equivalent to ceil(healthAfterSpecial / X)
        }

        // Find the minimum number of attacks
        int minAttacks = normalAttacks < specialAttackCount ? normalAttacks : specialAttackCount;
        
        printf("%d\n", minAttacks);
    }
    
    return 0;
}
