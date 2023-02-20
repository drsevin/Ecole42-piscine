#include <stdlib.h>
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
char *ft_strdup(char *src)
{
    int i;
    char *dest;
    dest = malloc(ft_strlen(src) + 1);
    
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
#include <stdio.h>
int main(int ac, char **av)
{
    if(ac == 2)
        printf("%s",ft_strdup(av[1]));
    return(0);
}