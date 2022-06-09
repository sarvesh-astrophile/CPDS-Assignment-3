#include <stdio.h>
#include <conio.h>

// making function for priting pattern #7

void rightSlantNumberPattern(int i) {
    for (int x = 1; x <= i; x++)
    {
        for (int  y = 1; y <= x; y++)
        {
            printf("%d ", y);
        }

        printf("\n");
    }
    
}

void main() {
    int xy;
    // printing for the input statement
    printf("Enter the size of square martrix:");
    scanf("%d",&xy);
    rightSlantNumberPattern(xy);
}