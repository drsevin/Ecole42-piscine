int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
#include <stdio.h>
int main()
{
    char str[] = "sevin sena";
    printf("%d", ft_strlen(str));
}