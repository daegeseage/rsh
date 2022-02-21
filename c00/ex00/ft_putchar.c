#include <unistd.h>
void ft_putchar(char c)
{
c = write(1, &c, 1);
}
int main()
{
ft_putchar;
}
