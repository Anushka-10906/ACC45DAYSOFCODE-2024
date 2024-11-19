#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int S, X, Y, Z;
        // Read the values for each test case
        scanf("%d %d %d %d", &S, &X, &Y, &Z);

        // Calculate the unused memory on the phone
        int unusedMemory = S - X - Y;

        // If there is enough unused memory to install the app, no need to delete
        if (unusedMemory >= Z) {
            printf("0\n");
        }
        // If deleting one app makes enough space
        else if (S - X >= Z || S - Y >= Z || (S - X - Y >= Z)) {
            printf("1\n");
        }
        // If both apps need to be deleted to make enough space
        else {
            printf("2\n");
        }
    }

    return 0;
}
