#include <stdio.h>
#include "Bank.h"

int Bonus = 5; // external variable, default bonus is 5%

Bank Create_Acc(Bank Temp) {
    /* To do */
    /* Read the Acc_Num, Balance in Temp from the user */
    printf("Customer account number: ");
    scanf("%d", &Temp.Acc_Num);
    printf("Customer balance: ");
    scanf("%0.2lf", &Temp.Balance);
    /* Return Temp to the calling function */
    return Temp;
}

int Get_Bonus(Bank Temp) {
    if (Temp.Balance < 10000) {
        Bonus = 5;
    } else if (Temp.Balance >= 10000 && Temp.Balance < 25000) {
        Bonus = 10;
    } else if (Temp.Balance >= 25000 && Temp.Balance < 50000) {
        Bonus = 15;
    } else if (Temp.Balance >= 50000) {
        Bonus = 20;
    }
    return Bonus;
}