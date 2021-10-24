#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct {
    int start;
    int stop;
    int step;
} range;


void argparse(int argc, char *argv[], int *start, int *stop, int *step) {

    for (int i = -1; i < argc; i++) {
        if (i == 1) {
            *start = atoi(argv[i]);
        }
        if (i == 2) {
            *stop = atoi(argv[i]);
        }
        if (i == 3) {
            *step = atoi(argv[i]);
        }
    }
}

int main(int argc, char *argv[]) {
        range I;
        I.start = -1000;
        I.step = -1000;
        I.stop = -1000;
        argparse(argc, argv, &I.start, &I.stop, &I.step);
        if (I.start == -1000 && I.stop == -1000 && I.step == -1000) {
            printf("help");
            return 0;
        }
        if (I.stop == -1000 && I.step == -1000) {
            for (int i = 0; i < I.start; i++) {
                printf("%d ", i);
            }
            return 0;
        }
        if (I.step == -1000) {
            for (int i = I.start; i < I.stop; i++) {
                printf("%d ", i);
            }
            return 0;
        }
        for (int i = I.start; i < I.stop; i += I.step) {
            printf("%d ", i);
        }
        return 0;
}