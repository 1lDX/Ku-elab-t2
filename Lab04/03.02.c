#include <stdio.h>
#include <stdlib.h>

// Function to count occurrences of target in n
int count_target(int n, int target) {
    int last_n, count = 0;  // Initialize count to 0
    while (n > 0) {
        last_n = n % 10;  // Extract the last digit
        if (last_n == target) {
            count++;  // Increment count if it matches the target
        }
        n = n / 10;  // Remove the last digit
    }
    return count;  // Return the total count
}

int main() {
    char input_n[12], input_x[3];  // Adjust input_x size to safely store input
    int n, x, count;

    // Input for n and x
    fgets(input_n, sizeof(input_n), stdin);
    fgets(input_x, sizeof(input_x), stdin);

    n = atoi(input_n);  // Convert input_n to integer
    x = atoi(input_x);  // Convert input_x to integer

    // Call the count_target function
    count = count_target(n, x);

    // Display output in separate cases
    if (count <= 0) {
        printf("There is no \"%d\" in %d.\n", x, n);
    } else if (count == 1) {
        printf("There is only 1 \"%d\" in %d.\n", x, n);
    } else {
        printf("There are %d \"%d\"(s) in %d.\n", count, x, n);
    }
    return 0;  // Exit successfully
}
