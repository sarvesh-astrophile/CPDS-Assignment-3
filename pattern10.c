#include <stdio.h>
#include <conio.h>

// making function for priting pattern #9

void rightSlantSomePattern(int i) {
    for (int y = 1; y <= i; y++)
    {
        for (int x = 1; x <= y; x++)
        {
            if (y%2 != 0)
            {
                if (x%2!=0)
                {
                    printf("1 ");
                }
                else if (x%2==0)
                {
                    printf("0 ");
                }
                
            }
            else if (y%2 == 0)
            {
                if (x%2!=0)
                {
                    printf("0 ");
                }
                else if (x%2==0)
                {
                    printf("1 ");
                }
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
    rightSlantSomePattern(xy);
}