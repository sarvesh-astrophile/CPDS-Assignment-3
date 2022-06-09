#include <stdio.h>
#include <conio.h>

// making function for priting pattern #3

void boxOutlinePattern(int i) {
    for (int x = 1; x <= i; x++)
    {
        for (int  y = 1; y <= i; y++)
        {
            if (x==1 || x==i)
            {
                printf("* ");
            }
            else if (y==1 || y==i)
            {
                printf("* ");
            }
            else
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
    boxOutlinePattern(xy);
}