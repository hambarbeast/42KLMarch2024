/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawal <mawal@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:39:27 by mawal             #+#    #+#             */
/*   Updated: 2024/03/28 20:10:15 by mawal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/* remove this to run the main
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 9;
	num2 = 3;
	ft_ultimate_div_mod(&num1, &num2);
	printf("The result is %d. The remainder is %d.", num1, num2);
}*/
