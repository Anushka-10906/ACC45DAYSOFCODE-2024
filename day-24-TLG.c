#include <stdio.h>

int main() {
    int N; // Number of rounds
    scanf("%d", &N);

    int score1 = 0, score2 = 0; // Cumulative scores
    int maxLead = 0; // Maximum lead
    int winner = 0; // Winner (1 or 2)

    for (int i = 0; i < N; i++) {
        int Si, Ti; // Scores for the current round
        scanf("%d %d", &Si, &Ti);
        
        // Update cumulative scores
        score1 += Si;
        score2 += Ti;

        // Determine the current leader and lead
        if (score1 > score2) {
            int lead = score1 - score2;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 1; // Player 1 is the leader
            }
        } else {
            int lead = score2 - score1;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 2; // Player 2 is the leader
            }
        }
    }

    // Output the winner and the maximum lead
    printf("%d %d\n", winner, maxLead);

    return 0;
}

