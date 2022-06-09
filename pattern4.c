#include <stdio.h>
#include <conio.h>

// making function for priting pattern #4

void slantPattern(int i) {
    for (int x = 1; x <= i; x++)
    {
        for (int  y = 1; y <= x; y++)
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
    slantPattern(xy);
}