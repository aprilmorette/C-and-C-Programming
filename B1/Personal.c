#include <stdio.h>
#include "Personal.h"

Personal Get_Info(Personal P) {
    /* To do: */
    /* Read the First_Name, Last_Name, and SSN in P from the user */
    printf("Customer first name: ");
    scanf("%s", P.First_Name);
    printf("Customer last name: ");
    scanf("%s", P.Last_Name);
    printf("Customer SSN: ");
    scanf("%d", &P.SSN);
    /* Return P to the calling function */
    return P;
}