int ft_atoi_base(char *str, int base)
{
    int i;
    int sign;
    int result;
    i = 0;
    sign = 1;
    result = 0;

    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i])
    {
        result *= base;
        if(str[i] >= '0' && str[i] <= '9')
            result = (str[i] - 48) + result;
        else if(str[i] >= 'a' && str[i] <= 'z')
            result = (str[i] - 87) + result;
        else if(str[i] >= 'A' && str[i] <= 'Z') 
            result += (str[i] - 55);
        i++;
    }
    return(result * sign);
}
#include <stdio.h>
int main()
{
    printf("%d", ft_atoi_base("--+---453", 8));
}