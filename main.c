#include "ft_printf.h"
int main(void)
{
	char res_o;
	char res_r;
	// int i = 10;
	// int *ptr = &i;

	res_o = ft_printf(" %% ");
	printf("\n");
	res_o = ft_printf(" %%%% ");
	printf("\n");
	res_o = ft_printf(" %% %% %% ");
	printf("\n");
	res_o = ft_printf(" %%  %%  %% ");
	printf("\n");
	res_o = ft_printf(" %%   %%   %% ");
	printf("\n");
	res_o = ft_printf("%%");
	printf("\n");
	res_o = printf("%% %%");
	printf("\n");
	printf("real:\n");
	res_r = printf(" %% ");
	printf("\n");
	res_r = printf(" %%%% ");
	printf("\n");
	res_r = printf(" %% %% %% ");
	printf("\n");
	res_r = printf(" %%  %%  %% ");
	printf("\n");
	res_r = printf(" %%   %%   %% ");
	printf("\n");
	res_r = printf("%%");
	printf("\n");
	res_r = printf("%% %%");
	//  printf("%d\n", res_r);

	return(0);
}

