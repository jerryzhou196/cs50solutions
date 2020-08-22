#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float c = -1;
    while (c < 0){
    c = get_float("Enter Change: ");
    };
    int change = round(c * 100);
    int coins = 0;
    printf("%i\n",change);
    while (change >= 25){
        change -= 25;
        coins++;
    } 
    while (change >= 10) {
        change -= 10;
        coins++;
    } 
    while (change >= 5){
        change -= 5;
        coins++;
    } 
    while (change >= 1){
        change -= 1;
        coins++;
    }
    
    printf("%i\n", coins);
}
