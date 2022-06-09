#include <stdio.h>
#include <conio.h>

// making function for priting pattern #9

void hollowPyramidPattern(int i) {
    for (int x = 1; x <= i; x++)
    {
        // for spaces
        for (int y1 = 1; y1 <= i-x; y1++)
        {
            printf("  ");
        }

        // for printing number
        for (int y2 = 1; y2 <= 2*x-1; y2++)
        {
            // printing numbers at odd places
            if (y2%2 != 0)
            {
                printf("%d ", x);
            }
            else if (y2%2 == 0)
            {
                printf("  ");
            }
            
            
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