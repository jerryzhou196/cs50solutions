#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = -1;
    while(height >= 9 || height <= 0) { 
    height = get_int("Enter a number: ");
    }

    for (int x = 0; x < height; x++){
        int spacer = (height - 1) - x;
        for (int y = 0; y < height; y++){
            if (spacer > 0){
                printf(" ");
                spacer = spacer - 1;
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
}
