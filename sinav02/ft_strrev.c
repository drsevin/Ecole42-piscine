int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
char *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;
    i = 0;
    len = ft_strlen(str);
    while(i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 -i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return(str);
}
#include <stdio.h>
int main(int ac, char **av)
{
    if(ac == 2)
        printf("%s",ft_strrev(av[1]));
    return(0);
}