unsigned char	ft_reverse_bits(unsigned char octet)
{
	unsigned char	res = 0;
	int i = 8;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
#include <stdio.h>
int main()
{
    char octet = '4';
    printf("%c", ft_reverse_bits(octet));
}