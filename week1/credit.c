#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
   
    long c = 0;
    c = get_long("Enter your card here: ");
    int second_digit_sum = 0;
    int first_digit_sum = 0;
    int first_digit;
    int second_digit;

    long temp_c = c;
    while(temp_c > 0){
        first_digit = temp_c % 10 ;
        temp_c /= 10;
        temp_c = truncl(temp_c);
        second_digit = temp_c % 10 ;
        temp_c /= 10;
        temp_c = truncl(temp_c);
        if (second_digit*2 >= 10){
            second_digit_sum += ((second_digit*2 % 10) + 1);
        } else{
            second_digit_sum += (second_digit * 2);
        }
        first_digit_sum += (first_digit);
    }
    int digit_15 = c/10000000000000;
    int digit_16 = c/100000000000000;
    int digit_13 = c/1000000000000;
    int visa_16 = c/1000000000000000;
    int sum = second_digit_sum + first_digit_sum;

    if ((sum % 10 != 0) || ((c/1000000000000000 > 10 || c/1000000000000000 <= 0) && (c/100000000000000 > 10 || c/100000000000000 <= 0) && (c/1000000000000 > 10 || c/1000000000000 <= 0))){
        printf("INVALID\n");  
    } else if (digit_15 == 34 || digit_15 == 37){
        printf("AMEX\n");
    } else if (digit_16 == 51 || digit_16 == 52 || digit_16 == 53 || digit_16 == 54 || digit_16 == 55){
        printf("MASTERCARD\n");
    } else if (digit_13 == 4 || visa_16 == 4 ) {
        printf("VISA\n");
    }
    else {
        printf("INVALID\n");
    }
}
