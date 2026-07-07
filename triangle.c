#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2);

    if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("The angles do not form a valid triangle.\n");
    }
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is a right-angled triangle.\n");
    }
    else {
        printf("The triangle is NOT a right-angled triangle.\n");
    }

    return 0;
}