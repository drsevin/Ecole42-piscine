int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while(str[i] == 43 || str[i] == 45)
    {
        if(str[i] == 45)
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - '0') + (result * 10);
        i++;
    }
    return(result * sign);
}
#include <stdio.h>
int main()
{
    printf("%d",ft_atoi("   -----++1234231lasjdk8327"));    
}