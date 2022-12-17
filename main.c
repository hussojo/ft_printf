#include "ft_printf.h"

int main(void)
{
	char res_o;
	// char res_r;

	res_o = ft_printf(" NULL %s NULL ", NULL);
	printf("%d\n", res_o);
	// res_r = printf(" NULL %s NULL ", NULL);
	// printf("%d\n", res_r);

	return(0);
}
