#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>

bool isPalindrome(int);



bool isPalindrome(int x){

    /*So split it in two and check if equal.
    Case: x == check if even amount of number.
        Example 123456 -> 123 456: not palindrome. 
    Case: x/10 == check if uneven.
        Example 123456 -> 1234 456  */
    
    int check = 0;

    while(x/10 > check){
        check = check*10 + x % 10;
        x /= 10;
    }

    if (x == check || x/10 == check) return true;
    return false;

};


int main(void){
    int x = 123421;
    bool test = isPalindrome(x);

    printf("%d\n", test);

    return 0;
    
}