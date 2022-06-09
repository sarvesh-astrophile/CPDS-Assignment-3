#include <stdio.h>
#include <conio.h>

// making function for priting pattern #6

void leftSlantPattern(int i) {
    for (int x = 1; x <= i; x++)
    {
        for (int  y1 = 1; y1 <= i-x; y1++)
        {
            printf("  ");
        }

        for (int y2 = 1; y2 <= x ; y2++)
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
    leftSlantPattern(xy);
}