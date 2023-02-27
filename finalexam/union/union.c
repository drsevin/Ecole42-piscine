#include <stdio.h>
int main(int ac, char **av)
{
    int i;
    i = 0;
    int j;
    
    if(ac == 3)
    {
        int size1 = ft_strlen(av[1]);
        int size2 = ft_strlen(av[2]);
        while (av[1][i])
        {
            j = i + 1;
            while (av[1][j])
            {
                if(av[1][i] == av[1][j])
                {
                    while (av[1][j])
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
        while (av[2][i])
        {
            j = i + 1;
            while (av[2][j])
            {
                if(av[2][i] == av[2][j])
                {
                    while (av[2][j])
                    {
                        av[2][j] = av[2][j + 1];
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
            while(av[2][j])
            {
                j = i + 1;
                
                if(av[1][i] == av[2][j])
                {
                    
                }
            }
            i++;
        }
    }
}