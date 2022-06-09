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

        // for printing number

        // printing number decrease 
        for (int x2 = 1; x2 <= y; x2++)
        {
            printf("%d ", (y-x2+1));
        }
        
        // printing number increase
        for (int x3 = 2; x3 <= y; x3++)
        {
            printf("%d ", x3);
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