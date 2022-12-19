#include "ft_printf.h"
int main(void)
{
	char res_o;
	char res_r;
	int i = 10;
	int *ptr = &i;

	res_o = ft_printf(" %p ", ptr);
	 printf("%d\n", res_o);
	res_r = printf(" %p ", ptr);
	 printf("%d\n", res_r);

	return(0);
}

