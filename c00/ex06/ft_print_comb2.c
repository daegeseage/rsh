#include <unistd.h>

void ft_print_comb2(void) {

char fchar;
char schar;
char tchar;
char fourchar;
char space;
char comma;
fchar = '0';
schar = '0';
tchar = '0';
fourchar = '0';
space = ' ';
comma = ',';

    for (int first = 0; first < 10; first++, fchar++) {
        for (int second = 0; second < 10; second++, schar++) {
            for (int third = 0; third < 10; third++, tchar++) {
                for (int fourth = 0; fourth < 10; fourth++, fourchar++) {
                if (fchar == tchar && schar == fourchar)
                    continue;
                if (third < first)
                    continue;
                if ( fourth < second)
                    continue;
                write(1, &fchar, 1);
                write(1, &schar, 1);
                write(1, &space, 1);
                write(1, &tchar, 1);
                write(1, &fourchar, 1);
                if ( first == 9 && second == 8 && third == 9 && fourth == 9)
                    continue;
                write(1, &comma, 1); 
                write(1, &space, 1);
                }
                fourchar = '0';
            }   
            tchar = '0';
        }
        schar = '0';
    }
}

int main () {
ft_print_comb2();
return 0;
}

