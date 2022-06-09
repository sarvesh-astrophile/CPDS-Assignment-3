#include <stdio.h>
#include <conio.h>

// making function for priting pattern #2

void boxPattern(int x, int y) {
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

void main() {
    int x,y;
    // printing for the input statement
    printf("Enter the no. of stars in x-axis:");
    scanf("%d",&x);
    printf("Enter the no. of stars in y-axis:");
    scanf("%d",&y);
    boxPattern(x,y);
}