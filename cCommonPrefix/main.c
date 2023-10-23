#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){

    for(int i = 1; i < strsSize; i++){
        for(int j; strs[0][j]; j++){
            if(!strs[i][j] || (strs[0][j] != strs[i][j])){
                strs[0][j] = '\0';
                break;
            }
        }
    }



    return strs[0];

}



int main(void){
    int StrSize = 5;
    char * prefix[7];
    char * strs[5] = {"Hello", "Hemma", "Hell", "hemligt", "help"};

    for(int j = 0; j < StrSize; j++){
        for(int i = 0; strs[j][i]; i++){
            if(!strs[j][i]) break;
            printf("%c", strs[j][i]);
        }
        printf("\n");
    }


    //*prefix = longestCommonPrefix(strs, StrSize);
    
    return 0;
}