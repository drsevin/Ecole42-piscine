#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    i = 0;
    char c;
    if(ac == 2)
    {
        while(av[1][i])
            i++;
        while(i != 0)
            write(1, &av[1][--i], 1);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}