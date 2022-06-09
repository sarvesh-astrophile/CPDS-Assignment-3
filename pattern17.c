#include <stdio.h>
#include <conio.h>

// making function for priting pattern 

void evenOddPyramidPattern(int i) {
    for (int y = 1; y <= i; y++)
    {
        //for printing space
        for (int x1 = 1; x1 <= i-y; x1++)
        {
            printf(" ");
        }

        //for printing numbers
        for (int x2 = 1; x2 <= y ; x2++)
        {
            printf("%d ",x2);
        }
        
        
        printf("\n");
    }
    
}

void main() {
    int xy;
    // printing for the input statement
    printf("Enter the number of rows:");
    scanf("%d",&xy);
    evenOddPyramidPattern(xy);
}