#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(void)
{
 printf("Output: %d\n", ft_str_is_alpha("H1"));	
 printf("Output: %d\n", ft_str_is_alpha("hello"));
}
