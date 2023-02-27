#include <stdlib.h>
char    *ft_strdup(char *src)
{
    char *dest;
    int length;
    int i;
    i = 0;
    length = 0;
    while(src[length])
        length++;
    dest = (char *) malloc(sizeof(char) * length + 1);
    if (dest == NULL)
        return (NULL);
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
#include <stdio.h>
int main()
{
    char str[] = "";
    printf("%s", ft_strdup(str));
    printf("%p\n", ft_strdup(str));
    printf("%p\n", str);
}