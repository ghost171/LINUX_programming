bin_PROGRAMS=main
pkgdata_DATA=ru/LC_MESSAGES/main.mo

TRASH=*.cache config.* configure depcomp *.exe missing *.o

ru/LC_MESSAGES/guess.mo: ru.po
	mkdir -p `dirname $@`
	msgfmt $< -o $@

gitclean:
	git clean -fd