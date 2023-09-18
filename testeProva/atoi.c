#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	while(str[i] == ' ')
		i++;

	if(str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i] == '-');
		i++;
	}

	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			while(str[i] >= '0' && str[i] <= '9')
			{
				res = res * 10 + str[i] - '0';
				i++;
			}
			break;
		}
		i++;
	}

	return (sign * res);
}


int	main(void)
{
	printf("\n\n%d\n\n", ft_atoi("   adsadsa1000dsadsa4"));
	return (0);
}
