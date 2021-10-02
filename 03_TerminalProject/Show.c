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
    curs_set(0);
    noecho();   
    win = newwin(LINES-2*DX, COLS-2*DX, DX, DX);
    keypad(stdscr, TRUE);
    scrollok (win, FALSE);

    /*int countofRows = 0;
    countofRows++;
    box(win, 0, 0);
    move(countofRows, 0);
    printw("Name of the file: %s", nameOfTheFile);
    countofRows++;
    move(countofRows, 0);
    printw("Content of the file: ");
    countofRows++;*/
    move(0, 0);
    printw("Name of the file: %s", nameOfTheFile);
    refresh();

    size_t streamsize;
    int countofRows = 0;
    char **content = (char **)malloc(sizeof(char *));
    content[0] = "Content of the file: ";
    char* lineRead = NULL;
    while (getline(&lineRead, &streamsize, contentOfTheFile) != -1) {
        content = (char**)realloc(content, (countofRows + 1) * sizeof(char *));
        content[countofRows] = lineRead;
        countofRows++;
        lineRead = NULL;
    }

    bool mustExit = FALSE;
    int currentRow = 0;
    int key_in = 0;
    while (key_in != 27) {
        werase(win);
        wmove(win, 1, 0);

        for (int i = 0; ((currentRow + i) < countofRows) && (i < 1000); i++ ) {
            wmove(win, i + 1, 0);
            wprintw(win, "%4d: ", currentRow + i);
            for (int j = 0; j < 190; j++) {
                wprintw(win, "%c", content[currentRow + i][j]);
            }
        }

        box(win, 0, 0);
        wrefresh(win);
        key_in = getch();
        if (key_in == ' ') {
            if (currentRow + 1 < countofRows) {
                currentRow++;
            }
        } else if (key_in == KEY_DOWN) {
            if (currentRow + 1 < countofRows) {
                currentRow++;
            }
        } else if (key_in == KEY_UP) {
            if (currentRow > 0) {
                currentRow--;
            }
        }
    } 

    fclose(contentOfTheFile);
    endwin();


    return 0;
}