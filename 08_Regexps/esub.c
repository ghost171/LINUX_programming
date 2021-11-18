#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "regex.h"
#include "esub.h"

int main(int argc, char **argv) {
    char *regexp, *substitution, *string;
    regexp = argv[2];
    substitution = argv[3];
    string = argv[1];

    char *stringDup[1]; 
    stringDup[0] = strdup(string);
    RegexReplaceOnce(stringDup, regexp, substitution);
    
    printf("%s\n", stringDup[0]);

    return 0;
}