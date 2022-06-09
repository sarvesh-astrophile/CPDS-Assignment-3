#include <stdio.h>
#include <conio.h>

// making function for priting pattern #9

void rightSlantContiPattern(int i) {
    int num=1;
    for (int x = 1; x <= i; x++)
    {
        for (int  y = 1; y <= x; y++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    
}

void main() {
    int xy;
    // printing for the input statement
    printf("Enter the size of square martrix:");
    scanf("%d",&xy);
    rightSlantContiPattern(xy);
}