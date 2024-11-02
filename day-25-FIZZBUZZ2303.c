#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of players

        // Calculate the number of choices for captain and vice-captain
        // The number of ways to choose a captain and a vice-captain is N * (N - 1)
        int choices = N * (N - 1);
        
        // Output the result for the test case
        printf("%d\n", choices);
    }

    return 0;
}