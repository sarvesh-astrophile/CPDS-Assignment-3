#include <stdio.h>
#include <conio.h>

// making function for priting pattern #5

void downSlantPattern(int i) {
    for (int x = 1; x <= i; x++)
    {
        for (int  y = 1; y <= (i+1)-x; y++)
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
    downSlantPattern(xy);
}