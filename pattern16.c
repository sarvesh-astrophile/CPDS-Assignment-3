#include <stdio.h>
#include <conio.h>

// making function for priting pattern #12

void hollowPyramidPattern(int i) {
    for (int y = 1; y <= i; y++)
    {
        for (int x = 1; x <= i-y+1; x++)
        {
            printf("%d ",y);
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