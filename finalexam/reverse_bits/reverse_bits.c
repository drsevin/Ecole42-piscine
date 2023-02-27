unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 8;
    while (i > 0)
    {
        result = result * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return (result);
}
#include <stdio.h>
int main()
{
    printf("%d", reverse_bits(38));
    return(0);
}