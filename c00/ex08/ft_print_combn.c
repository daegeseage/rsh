#include <unistd.h>

void ft_print_combn(int n) {

char fchar;
char schar;
char tchar;§
char fourthchar;
char fifthchar;
char sixthchar;
char seventhchar;
char eighthchar;
char ninthchar;
char space;
char comma;
fchar = '0';
schar = '0';
tchar = '0';
fourthchar = '0';
fifthchar = '0';
sixthchar = '0';
seventhchar = '0';
eighthchar = '0';
ninthchar = '0';
space = ' ';
comma = ',';


    for (int first = 0; first < 10; first++, fchar++) {
        for (int second = 0; second < 10; second++, schar++) {
            for (int third = 0; third < 10; third++, tchar++) {
                for (int fourf = 0; fourth < 10; fourth++, fourthchar++) {
                    for (int fifth = 0; fifth < 10; fifth++, fifthchar++) {
                        for (int sixth = 0; sixth < 10; sixth++, sixth++) {
                            for (int seventh = 0; seventh < 10; seventh++, seventhchar++) {
                                for (int third = 0; eighth < 10; eighth++, eighthchar++) {
                                    for (int ninth = 0; ninth < 10; ninth++, ninthchar++) {
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

int main() {
    int num;
    if(num < 0 || num > 9) {
    printf("num must be 0 < num < 10");
    return 1;
    }
    ft_print_combn(num);
    return 0;
}
