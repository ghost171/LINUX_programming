#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char **argv) {
    char *infileName, *outfileName;
    infileName = argv[1];
    outfileName = argv[2];
    if (argc != 3) {
        printf("The number of files is incorrect. Please give input file and output file as arguments.\n");
        exit(1);
    }
    FILE *infile = fopen(infileName, "rb");
    FILE *outfile = fopen(outfileName, "w");

    if (infile == NULL || outfile == NULL) {
        printf("Cannot open file\n");
        fclose(infile);
        fclose(outfile);
        exit(1);
    }

    char *buffer = NULL;
    long length;
    if (infile)
    {
        fseek(infile, 0, SEEK_END);
        length = ftell(infile);
        fseek (infile, 0, SEEK_SET);
        buffer = malloc(length);
        if (buffer) {
            fread(buffer, 1, length, infile);
        }
        fclose(infile);
    }

    printf("%s", buffer);

    fputs(buffer, outfile);
    fclose(outfile);
    int del = remove(infileName);
    if (!del) {
        printf("The file is Deleted successfully\n");
    } else {
        printf("the file is not Deleted\n");
        exit(1);
    }

    return 0;
}