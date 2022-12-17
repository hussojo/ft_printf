#include "ft_printf.h"
# define INT_MIN -2147483648

int main(void)
{
	// char res_o;
	char res_r;

	// res_o = ft_printf(",oi %i moi\n", INT_MIN);
	// printf("%d\n", res_o);
	res_r = printf(",oi %i moi\n", INT_MIN);
	printf("%d\n", res_r);

	return(0);
}
