#ifndef PERSONAL_H
#define PERSONAL_H

typedef struct personal {
    char First_Name[20];
    char Last_Name[20];
    int SSN;
} Personal;

Personal Get_Info(Personal);

#endif