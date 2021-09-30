#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <locale.h>
#include <string.h>
#include <math.h>

#define DX 3

int main(int argc, char **argv) {
    WINDOW *win;
    FILE *contentOfTheFile;
    int c = 0;
    char *nameOfTheFile = argv[1];
    printf("%s", nameOfTheFile);
    contentOfTheFile = fopen(nameOfTheFile, "r");
    if (contentOfTheFile == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    setlocale(LC_ALL, "");

    initscr();
    noecho();
    cbreak();
    printw("This program prints name and content of the file:");
    refresh();

    win = newwin(LINES-2*DX, COLS-2*DX, DX, DX);
    keypad(win, TRUE);
    scrollok(win, TRUE);
    char letter = 'c';
    int i = 0;
    curs_set(0);

    /*wmove(win, 1, 1);
    int countofRows = 0;
    countofRows++;
    wmove(win, countofRows, 1);
    wprintw(win, "Name of the file: %s", nameOfTheFile);
    countofRows++;
    wmove(win, countofRows, 1);
    wprintw(win, "Content of the file: ");
    countofRows++;
    wmove(win, countofRows, 1);
    int lengthOfRow;*/

    int countOfBackspace = 0;

    char *readLine;
    size_t streamsize;
    char **content = NULL;
    int index = 0;
    while(getline(&readLine, &streamsize, contentOfTheFile) != EOF ) {
        content = (char **)realloc(content, (index + 1) * sizeof(char *));
        printf("                %s", readLine);
        content[index] = readLine;
        index++;
        readLine = NULL;
    }

    bool mustExit = 0;
    int row = 0;
    /*while (!mustExit) {
        wmove(win, 1, 0);

        for (int i = 0; row + i < index && i < 1448; i++ ) {
            wmove(win, i + 1, 0);
            wprintw(win, "%4d: ", row + i);
            waddstr(win, content[row + i]);
        }

        box(win, 0, 0);
        wrefresh(win);
        int input = getch();
        switch(input) {
            case ' ':
            case KEY_DOWN:
                if (row + 1 < countofRows) {
                    row++;
                }
                break;
            case KEY_UP:
                if (row > 0) {
                    row--;
                }
                break;
            case 27:
                mustExit = 1;
                break;
            default:
                break;

        }

    } */

    fclose(contentOfTheFile);
    endwin();


    return 0;
}