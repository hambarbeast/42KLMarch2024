/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawal <mawal@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:33:37 by mawal             #+#    #+#             */
/*   Updated: 2024/03/28 15:51:48 by mawal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_alpha(char c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	return (0);
}

int	check_alphanumeric(char c)
{
	if ((check_alpha(c)) || ((c >= '0') && (c <= '9')))
	{
		return (1);
	}
	return (0);
}

int	check_lowcase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((check_alpha(str[i])) && (!(check_lowcase(str[i])))))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (check_lowcase(str[0]))
		{
			str[0] = str[0] - 32;
		}
		else if ((!(check_alphanumeric(str[i])) && (check_lowcase(str[i + 1]))))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str [] = "salut, coMMent tU vas ?";
	char	str2 [] = " 42mots quaRAnte-DeUx";
	char	str3 []	= "; cinquante+et+un";
	
	printf("Before:\n%s\n%s\n%s\n", str, str2, str3);
	ft_strcapitalize(str);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	printf("After:\n%s\n%s\n%s\n", str, str2, str3);
}*/
