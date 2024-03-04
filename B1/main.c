#include <stdio.h>
#include "Personal.h"
#include "Bank.h"

int main(void) {
    /* Create output file Personal.csv and Bank.csv to store desired data */
    /* To do */
    /* Declare File pointers for "Personal.csv" and "Bank.csv" */
    FILE* personalOutFile = NULL;
    FILE* bankOutFile = NULL;
    /* Create an array of variable (at least 5) of type Personal and Bank */
    Personal info[5];
    Bank Info[5];
    /* Open Files "Personal.csv" and "Bank.csv" in write mode */
    personalOutFile = fopen("Personal.csv", "w");
    bankOutFile = fopen("Bank.csv", "w");
    /* Store at least 5 records in Personal.csv and Bank.csv Files */
    
    /* Close all the Files once all records are stored in respective Files */
}