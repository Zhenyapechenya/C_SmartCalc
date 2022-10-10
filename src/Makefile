CC = gcc -Wall -Wextra -Werror
GCOV = -fprofile-arcs -ftest-coverage
REPORTDIR = report
BD = ../build/
OS = $(shell uname)
ifeq ($(OS), Linux)
  LIBS = -lcheck -lpthread -lrt -lm -lsubunit
else
  LIBS = -lcheck
endif

all: clean gcov_report

s21_calc.a:
	$(CC) -c s21_calc.c -o s21_calc.o
	ar rcs s21_calc.a s21_calc.o

test: s21_calc.a
	$(CC) s21_test.c s21_calc.a $(LIBS) -o calc_test.out
	./calc_test.out

gcov_report: s21_calc.a test
	$(CC) $(GCOV) s21_test.c s21_calc.c $(LIBS) -o GCOV_test.out
	./GCOV_test.out
	lcov -t "Unit-tests of s21_calc" -o s21_calc.info -c -d .
	genhtml -o $(REPORTDIR) s21_calc.info
	open $(REPORTDIR)/index.html

build: clean 
	mkdir ../build
	cp calc.pro $(BD)
	cp *.c *.h *.cpp *.ui $(BD)
	cd $(BD); qmake calc.pro
	make -C $(BD)
	cd $(BD); rm -rf *.c *.h *.cpp *.ui *.o
	open $(BD).

install: build
	mkdir $(HOME)/Desktop/SmartCalc_v1.0/
	cp -rf $(BD)SmartCalc $(HOME)/Desktop/SmartCalc_v1.0/
	make clean

uninstall:
	rm -rf $(HOME)/Desktop/SmartCalc_v1.0/

dvi: 
	open -a "Google Chrome" description.html

dist: 
	rm -rf backup_Smart_Calc
	mkdir backup_Smart_Calc
	cp Makefile *.c *.h *.pro *.html *.cpp *.ui *.user backup_Smart_Calc/
	tar -cvzf $(HOME)/Desktop/backup_Smart_Calc.tgz backup_Smart_Calc/
	rm -rf backup_Smart_Calc/

clean:
	rm -rf *.o *.a *.gcno *.gcda *.gcov *.info *.out $(REPORTDIR) main s21_calc

cpp:
	cppcheck --enable=all --suppress=missingIncludeSystem s21_calc.c s21_calc.h s21_test.c

leaks: test
	CK_FORK=no leaks -atExit -- ./calc_test.out

