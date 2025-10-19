#include <stdio.h>

int main() {
    int marks, pass[10], fail[10],i;
    int pCount = 0, fCount = 0;
    float passSum = 0, failSum = 0;

    printf("Enter marks for students (-1 to stop):\n");

    for( i = 0; i < 10; i++) {
        scanf("%d", &marks);

        if (marks == -1)
            break;

        if (marks >= 5 && marks <= 10) {
            pass[pCount++] = marks;
            passSum += marks;
        } else if (marks >= 0 && marks < 5) {
            fail[fCount++] = marks;
            failSum += marks;
        }
    }

    printf("\nPass Students Marks: ");
    for ( i = 0; i < pCount; i++)
        printf("%d ", pass[i]);

    printf("\nAverage (Pass): %.2f", (pCount > 0) ? passSum / pCount : 0);

    printf("\n\nFail Students Marks: ");
    for ( i = 0; i < fCount; i++)
        printf("%d ", fail[i]);

    printf("\nAverage (Fail): %.2f\n", (fCount > 0) ? failSum / fCount : 0);

    return 0;
}

