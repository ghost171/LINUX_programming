#include "stdio.h"
#include "math.h"
#include <string.h>
#include <libgen.h>
#include <libintl.h>
#include "locale.h"

#define _(string) gettext(STRING)
#define LOCALE_PATH "."

int main(int argc, void *argv[]) {
    int concieved_value;
    printf("Concieve a number: ");
    scanf("%d", &concieved_value);
    int guessing = 50;
    int lastGuessing = 100;
    setlocale(LC_ALL, NULL);
    bindtextdomain("main", "po");
    textdomain("main");


    while (guessing != concieved_value) {
        printf("The number is greater than %d? ", guessing);
        char answer[3];

        scanf("%s", answer);

        int yes;
        if (strcmp(answer, "yes") == 0) {
            yes = 1;
        } else {
            yes = -1;
        }

        int temp = guessing;
        if (guessing > lastGuessing) {
            guessing = guessing + yes * round((guessing - lastGuessing) / 2.0);
        } else {
            guessing = guessing +  yes * round((lastGuessing - guessing) / 2.0);
        }
        lastGuessing = temp;
    }
    printf("I guessed! Your number is %d", guessing);
    return 0;
}