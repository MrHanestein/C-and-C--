// -----------------------------------------------------
// CSC371 Advanced Object-Oriented Programming (2024/25)
//
// (c) Martin Porcheron
//     Thomas Reitmaier
//     thomas.reitmaier@swansea.ac.uk
// -----------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "timestable.h"


//int main(int argc , char *argv[]) {
   // int *ptr[13];
    //}

int main(void) {
    // 1) create an array of 13 pointers on the stack:
    int *tables[MAX_TIMES_TABLE + 1];

    // 2) for each times-table index t = 0…12:
    for (int t = 0; t <= MAX_TIMES_TABLE; t++) {
        // allocate space for one table of MAX_TABLE_SIZE ints
        tables[t] = malloc(MAX_TABLE_SIZE * sizeof *tables[t]);
        if (tables[t] == NULL) {
            perror("malloc failed");
            // if one allocation fails, clean up those already done:
            for (int u = 0; u < t; u++) {
                free(tables[u]);
            }
            return 1;
        }
        // fill in the t‑times table
        generateTable(t, tables[t]);
    }

    // 3) print all the tables
    printTables(tables);

    // 4) free each heap block
    for (int t = 0; t <= MAX_TIMES_TABLE; t++) {
        free(tables[t]);
    }
    return 0;
}

