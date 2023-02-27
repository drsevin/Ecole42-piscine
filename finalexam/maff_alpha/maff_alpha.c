#include <unistd.h>
int main()
{
    char c;
    c = 65;
    int i = 1;
    while((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
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
        c++;
    }
}