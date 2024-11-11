#include <stdio.h>

int main() {
    int X, Y;  // X: Total movie time in minutes, Y: Time Chef watches at double speed
    scanf("%d %d", &X, &Y);  // Read the values for X and Y

    // Time spent watching the first Y minutes at double speed
    int time_at_double_speed = Y / 2;
    
    // Time spent watching the remaining (X - Y) minutes at normal speed
    int time_at_normal_speed = X - Y;

    // Total time Chef spends watching the movie
    int total_time = time_at_double_speed + time_at_normal_speed;

    // Output the result
    printf("%d\n", total_time);

    return 0;
}
