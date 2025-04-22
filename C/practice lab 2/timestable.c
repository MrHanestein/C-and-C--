#include <stdio.h>
#include "timestable.h"

// Build table[i] = i * num for i = 0…MAX_TABLE_SIZE–1
void generateTable(int num, int *table) {
    for (int i = 0; i < MAX_TABLE_SIZE; i++) {
        table[i] = i * num;
    }
}

// Print one table, same formatting as before
void printTable(int num, int *table) {
    printf("%-2d times table\n", num);
    for (int i = 0; i < MAX_TABLE_SIZE; i++) {
        printf("%-2d * %-2d = %d\n", num, i, table[i]);
    }
    printf("\n");
}

// Print all tables 0…MAX_TIMES_TABLE stored in `tables`
// tables is an array of (int*) pointers, each pointing to a table of ints.
// We simply loop over each table pointer and call printTable.
//
// tables[0] → pointer to table for 0
// tables[1] → pointer to table for 1
// …
// tables[12] → pointer to table for 12
void printTables(int **tables) {
    for (int t = 0; t <= MAX_TIMES_TABLE; t++) {
        printTable(t, tables[t]);
    }
}
