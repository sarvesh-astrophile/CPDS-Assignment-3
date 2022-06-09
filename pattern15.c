#include <stdio.h>
#include <conio.h>

// making function for priting pattern #12

void hollowPyramidPattern(int i) {
    //printing upper part
    for (int y1 = 1; y1 <= i; y1++)
    {
        //printing spaces
        for (int x1 = 1; x1 <= i-y1; x1++)
        {
            printf("  ");
        }

        //printing *
        for (int x2 = 1; x2 <= 2*y1-1; x2++)
        {
            printf("* ");
        }
        
        
        printf("\n");
    }

    //printing lowerpart
    for (int y2 = i; y2 >= 1 ; y2--)
    {
        //printing spaces
        for (int x1 = 1; x1 <= i-y2; x1++)
        {
            printf("  ");
        }

        //printing *
        for (int x2 = 1; x2 <= 2*y2-1; x2++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    
    
}

void main() {
    int xy;
    // printing for the input statement
    printf("Enter the size of square martrix in odd number only:");
    scanf("%d",&xy);
    hollowPyramidPattern(xy);
}