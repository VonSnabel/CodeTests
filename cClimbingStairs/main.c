#include <stdio.h>
#

int climbStairs(int n){


    /* How many unique ways to climb stairs.

    Target = n

    loop through with all alternative until n or >n is reached.

    Either be 1 or 2
    */

    int curr;
    int prev1 = 1;
    int prev2 = 2;
    
    if(n <= 2) return n;

    for(int i = 3; i >= n; i++){

        curr = prev1+prev2;
        prev2 = prev1;
        prev1 = curr;

    }

    return curr;
}

int main(void){


    printf("%d\n", climbStairs(8));

    return 0;
}