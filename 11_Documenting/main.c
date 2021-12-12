#include "stdio.h"
#include "math.h"
#include <string.h>
#include <libgen.h>
#include <libintl.h>
#include "locale.h"

#define _(string) gettext(STRING)
#define LOCALE_PATH "."

const char roman[101][10] = {"0", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX", "XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX", "XXX", "XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX", "XL", "XLI", "XLII", "XLIII", "XLIV", "XLV", "XLVI", "XLVII", "XLVIII", "XLIX", "L", "LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX", "LX", "LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX", "LXX", "LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX", "LXXX", "LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX", "XC", "XCI", "XCII", "XCIII", "XCIV", "XCV", "XCVI", "XCVII", "XCVIII", "XCIX", "C"};

int main(int argc, void *argv[]) {
    int concieved_value;
    printf("Concieve a number: ");
    scanf("%d", &concieved_value);
    int guessing = 50;
    int lastGuessing = 100;
    setlocale(LC_ALL, NULL);
    bindtextdomain("main", "po");
    textdomain("main");

    int key = 0;

    if (argc == 2) {
        if (!strcmp(argv[1], "-r")) {
            key = 1;
        }
    }
    int start = 0;
	int end = 100;
	char user_input[80];
	while (start != end) {
		int partial_answer = ((end - start) / 2) + start;
		if (key == 0) {
            printf(_("Number more than %d?\n>"), partial_answer);
		} else {
            printf(_("Number more than %s?\n>"), roman[partial_answer]);
		}
		scanf("%s", user_input);
		if (!strcmp(user_input, "yes")) {
			start = partial_answer + 1;
		} else {
			end =  partial_answer;
        }
	}
    if (key == 0) {
        printf(_("Your number is %d\n"), start);
	} else {
        printf(_("Your number is %s\n"), roman[start]);
    }
    return 0;
}