#include <stdio.h>
#include <conio.h>

// making function for priting pattern 

void hollowPyramidPattern(int i) {
    //for printing rows
    int rows = 2*i-1;
    for (int y = 1; y <= i; y++)
    {
        //for upper part
        if (y<i)
        {
            //printing * first time
            for (int x1 = 1; x1 <= y; x1++)
            {
                printf("* ");
            }
            
            //printing space
            for (int x2 = 0; x2 < (rows)-2*y; x2++)
            {
                printf("  ");
            }
            
            //printing * second time
            for (int x3 = 1; x3 <= y; x3++)
            {
                printf("* ");
            }

        }
        // printing middle part
        else if (y==i)
        {
            for (int x1 = 1; x1 <= rows; x1++)
            {
                printf("* ");
            }
            
        }

        printf("\n");
        
    }

    // printing lower part
    for (int y2 = 1; y2 < i; y2++)
    {
        //for printing * first time
        for (int x1 = 1; x1 <= i-y2; x1++)
        {
            printf("* ");
        }

        //for printing space
        for (int x2 = 1; x2 <= 2*y2-1; x2++)
        {
            printf("  ");
        }
        
        //for printing * second time
        for (int x3 = 1; x3 <= i-y2; x3++)
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