void ft_print_numbers(void) {
    for(char num = '1'; num <= '9'; num++) {
        write(1, &num, 1);
    }
}
