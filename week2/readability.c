#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void){
    string input = get_string("Enter Text Here: ");

    float sentences = 0;
    float words = 1;
    float letters = 0;

    for (int x = 0, n = strlen(input); x < n; x++){
        if (input[x] >= 'A' && input[x] <= 'z'){
            letters += 1;
        } else if (input[x] == ' ' ) {
            words += 1;
        } else if (input[x] == '.' || input[x] == '?' || input[x] == '!'){
            sentences += 1;
        }
    }


    float index = 0.0588 * (letters * 100 / words) - 0.296 * (sentences * 100 / words) - 15.8;
    index = round(index);
    if (index < 1) {
        printf("Before Grade 1\n");
    } else if (index > 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %i\n", (int) index);
    }
}