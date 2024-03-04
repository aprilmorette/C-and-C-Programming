#ifndef BANK_H
#define BANK_H

typedef struct bank {
    int Acc_Num;
    double Balance;
} Bank;

Bank Create_Acc(Bank);

int Get_Bonus(Bank);

#endif