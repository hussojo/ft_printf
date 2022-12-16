#include "ft_printf.h"

int main(void)
{
	char res_o;
	char res_r;

	res_o = ft_printf(",oi %i moi\n", 6);
	printf("%d\n", res_o);
	res_r = printf(",oi %i moi\n", 6);
	printf("%d\n", res_r);

	return(0);
}
