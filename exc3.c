#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance sum;

    // Add the inches and carry over if needed
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12) {
        sum.inches -= 12;
        sum.feet = 1;
    } else {
        sum.feet = 0;
    }

    // Add the feet
    sum.feet += d1.feet + d2.feet;

    return sum;
}

int main() {
    struct Distance distance1, distance2, sum;

    // Input the first distance
    printf("Enter Distance 1 (feet inches): ");
    scanf("%d %d", &distance1.feet, &distance1.inches);

    // Input the second distance
    printf("Enter Distance 2 (feet inches): ");
    scanf("%d %d", &distance2.feet, &distance2.inches);

    // Add the distances
    sum = addDistances(distance1, distance2);

    // Display the result
    printf("Sum of Distances: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}
