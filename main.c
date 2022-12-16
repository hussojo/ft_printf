#include "ft_printf.h"

int main(void)
{
	char res_o;
	char res_r;

	res_o = ft_printf(",oi %d moi\n", 110);
	printf("%d\n", res_o);
	res_r = printf(",oi %d moi\n", 110);
	printf("%d\n", res_r);

	return(0);
}
