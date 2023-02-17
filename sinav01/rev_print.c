#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_strlen(char *c)
{
    int i;
    i = 0;
    while(c[i] != '\0')
    {
        i++;
    }
    return(i);
}
void ft_rev_print(char *str)
{
    int size;
    size = ft_strlen(str);
    int sw;
    int i;
    i = 0;
    while(i < (size / 2))
    {
        sw = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = sw;
        i++;
    }
    int j;
    j = 0;
    while(str[j] != '\0')
    {
        ft_putchar(str[j]);
        j++;
    }
    
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_rev_print(av[1]);
    }
    else
        ft_putchar('\n');
    return(0);
}