#include <string.h>
#include "ex1.h"
#include <stdio.h>

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */

int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
    int i = 0;
    int count = 0;
    for (i = 0; i < strlen(str); ++i) {
        if (str[i] == letter) {
          ++count;
        }
    }
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */

void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    char* sq = dna_seq->sequence;
    dna_seq->A_count = num_occurrences(sq, 'A');
    dna_seq->C_count = num_occurrences(sq, 'C');
    dna_seq->G_count = num_occurrences(sq, 'G');
    dna_seq->T_count = num_occurrences(sq, 'T');
    return;
} 
