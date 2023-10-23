#include "libft.h"

/* ***********************
*  NAME: FT_BZERO
******************************************************************************
* DESCRIPTION:
* A função bzero pode ser usada para apagar a área de memória
* fornecida com zero bytes (\0). Leva dois argumentos, o endereço inicial
* da região da memória e o número de bytes que precisam ser zerados.
*
* *******************************************************************************
* ARGUMENTS:
* [1] = A pointer of ...
* [2] = A
* **************************************************************************** */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
