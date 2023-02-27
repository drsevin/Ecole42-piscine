#include <unistd.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
int main(int ac, char **av)
{
    int i;
    int size;
    if(ac == 2)
    {
        size = ft_strlen(av[1]);
        while(av[1][size - 1] == ' ' || av[1][size -1] == '\t')
        {
            size--;
        }
        while(av[1][size - 1] >= 33 && av[1][size - 1] <= 126)
        {
            size--;
        }
        i = size;
        while(av[1][i] != ' ' && av[1][i] != '\0')
        {
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}