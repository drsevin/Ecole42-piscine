void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
#include <stdio.h>
int main()
{
    int x = 12345;
    int y = 67890;
    ft_swap(&x, &y);
    printf("a : % d b : %d ", x, y);

}