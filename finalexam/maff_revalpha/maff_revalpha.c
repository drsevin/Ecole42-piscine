#include <unistd.h>
int main()
{
    int i;
    i = 1;
    char c;
    c = 'Z';
    while((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if(i % 2 == 0)
        {
            c -= 32;
        }
        else if(i % 2 == 1)
        {
            c += 32;
        }
        write(1, &c, 1);
        i++;
        c--;
    }
}