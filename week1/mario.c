#include <cs50.h>
#include <stdio.h>

int main(void)
{


    int height = -1;
    while(height > 8 || height <= 0){
        height = get_int("Enter Height:");
    }
    for (int x = 0; x < height; x++) {
        int spacer = height - (x+1);
        for (int y = 0; y < height; y++){
            if (spacer > 0){
                printf(" ");
                spacer--;
            }
            else {
                printf("#");
            }
        }
        printf("  ");
        for (int z = 0; z < x+1; z++){
            printf("#");
        }
        if (x != height) {
            printf("\n");
        }
    }
}
   


