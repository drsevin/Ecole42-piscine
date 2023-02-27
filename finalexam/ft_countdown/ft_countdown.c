#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main()
{
    char i = '9';
    while(i >= '0')
    {
        ft_putchar(i);
        i--;
    }
}
/*
int main()
{
    int i = 9;
    while(i >= 0)
    {
        write(1, &"0123456789"[i], 1);
        i--;
    }
}*/