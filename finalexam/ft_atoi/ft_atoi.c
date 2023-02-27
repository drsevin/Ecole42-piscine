int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;
    result = 0;
    sign = 1;
    i = 0;
    while((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - 48) + (result * 10);
        i++;
    }
    return(result * sign);
}

#include <stdio.h>
int main()
{
    char str[] = "   ---+++12345ab6789";
    printf("%d", ft_atoi(str));
}