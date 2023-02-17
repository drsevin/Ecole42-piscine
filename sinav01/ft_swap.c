#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int x;
    int y;
    x = 15;
    y = 8;
    ft_swap(&x, &y);
    printf("%d %d", x, y);
}