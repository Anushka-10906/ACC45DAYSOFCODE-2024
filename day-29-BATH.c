#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);  // Read the values of X and Y for each test case
        
        int water_per_person = 2 * Y;  // Total water required for one person
        int max_people = X / water_per_person;  // Maximum number of people who can bathe
        
        printf("%d\n", max_people);  // Output the result
    }
    
    return 0;
}