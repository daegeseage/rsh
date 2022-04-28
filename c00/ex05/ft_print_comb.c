#include <unistd.h>

void ft_print_comb(void) {

char fchar;
char schar;
char tchar;
char space;
char comma;
fchar = '0';
schar = '0';
tchar = '0';
space = ' ';
comma = ',';


    for (int first = 0; first < 10; first++, fchar++) {
        for (int second = 0; second < 10; second++, schar++) {
            for (int third = 0; third < 10; third++, tchar++) {
                if (second < first)
                continue;
                if (third < second)
                continue;
                if (third < first)
                continue;
                if (fchar == schar || schar == tchar || fchar == tchar)
                continue;
                write(1, &fchar, 1);
                write(1, &schar, 1);
                write(1, &tchar, 1);
                if(first == 7 && second == 8 && third == 9)
                continue;
                write(1, &comma, 1);
                write(1, &space, 1); 
            }
            tchar = '0';
        }
        schar = '0';
    }
}
