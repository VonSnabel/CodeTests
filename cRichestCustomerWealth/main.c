#include <stdio.h>

/* We're just gonna sum up rows of a matrix*/

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){

    int bigMoney = 0, newMoney = 0;

    for(int i = 0; i<accountsSize; i++){
        for(int j = 0; j< *accountsColSize; j++){
            printf("%d\n", accounts[i][j]);
            newMoney += accounts[i][j];
        }
        printf("\n");
        if(newMoney > bigMoney) bigMoney = newMoney;
        newMoney = 0;
    }

    return bigMoney;
}


int main(void){

    int n;
    int nbrPeople = 3, nbrBanks = 3;
    int *p_nbrBanks = &nbrBanks;


    int dude0[3] = {5, 1, 3}, 
        dude1[3] = {7, 1, 2},
        dude2[3] = {3, 4, 7},
        *p_dude0 = &dude0[0],
        *p_dude1 = &dude1[0],
        *p_dude2 = &dude2[0];

    int *p_accounts[3] = {p_dude0, p_dude1, p_dude2};

    n = maximumWealth(p_accounts, nbrPeople, p_nbrBanks);

    printf("%d\n", n);

    return 0;
}