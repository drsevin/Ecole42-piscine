#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int j;
    i = 0;
    if(ac == 3)
    {
        while (av[1][i])
        {
            j = i + 1;
            while (av[1][j])
            {
                if(av[1][i] == av[1][j])
                {
                    while(av[1][j])
                    {
                        av[1][j] = av[1][j + 1];
                        j++;
                    }
                    i++;
                    j = i + 1;
                }
                else
                    j++;
            }
            i++;
        }
        i = 0;
        while(av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    write(1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}