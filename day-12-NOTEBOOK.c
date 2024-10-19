#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Weight of pulp in kgs
        scanf("%d", &N);
        
        // Calculate the number of notebooks
        // 1 kg of pulp makes 1000 pages
        // 1 notebook consists of 100 pages
        int totalPages = N * 1000;
        int notebooks = totalPages / 100;

        printf("%d\n", notebooks);
    }

    return 0;
}