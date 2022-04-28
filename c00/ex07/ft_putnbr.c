#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb) {
char fchar;
char minus;
int digits;
int nb_count;
int num;
fchar = '0';
minus = '-';
digits = 0;
nb_count = nb;
    if (nb == 0)
        write(1, &fchar, 1); 
    if (nb < 0) {
        write(1, &minus, 1);
        nb = nb * -1;
    }
    while (nb_count != 0) {
        nb_count /= 10;
        digits++;
    }
    while (digits != 0) {
            num = nb;
            for ( int k = 0; k < digits - 1; k++) {
                num /=10;
            }
            fchar = fchar + num;
            write(1, &fchar, 1);
            fchar = '0';
            for (int m = 0; m < digits - 1; m++) {
                num = num * 10;
            }
            nb = nb - num;
            digits--;
    }
}

int main () {
    int num;
    scanf("%d", &num);
    ft_putnbr(num);
return 0;
}


