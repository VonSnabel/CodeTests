#include <stdio.h>
#include <stdbool.h>



bool isPowerOfFour(int n){

    if ((n < 4 || n % 4 != 0) && n != 1) return false;
    else if(n/4 == 4 || n == 4 || n == 1) return true;

    return(isPowerOfFour(n/4));
}

int main(void){

    int n;

    printf("Enter Number: ");
    scanf("%d", &n);
    

    printf("%d\n", isPowerOfFour(n));

    return 0;
}