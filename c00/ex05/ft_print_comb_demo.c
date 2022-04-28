#include <unistd.h>

void demo_comb(void) {

char fchar;
char schar;
char space;
fchar = '0';
schar = '0';
space = ' ';


    for (int first = 0; first < 10; first++, fchar++) {
        for (int second = 0; second < 10; second++, schar++) {
            if (second < first)
            continue;
            if (fchar == schar)
            continue;
            write(1, &fchar, 1);
            write(1, &schar, 1);
            write(1, &space, 1); 
        }
        schar = '0';
    }
}

int main() {
demo_comb();
return 0;
}
