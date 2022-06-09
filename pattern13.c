#include <stdio.h>
#include <conio.h>

// making function for priting pattern #12

void hollowPyramidPattern(int i) {
    for (int y = 1; y <= i; y++)
    {
        // for spaces
        for (int x1 = 1; x1 <= i-y; x1++)
        {
            printf("  ");
        }

        // for printing *estrics

        for (int x2 = 0; x2 < i; x2++)
        {
            printf("* ");
        }
        
        
        printf("\n");
    }
    
}

void main() {
    int xy;
    // printing for the input statement
    printf("Enter the size of square martrix:");
    scanf("%d",&xy);
    hollowPyramidPattern(xy);
}