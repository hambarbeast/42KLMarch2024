/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawal <mawal@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:43:21 by mawal             #+#    #+#             */
/*   Updated: 2024/03/21 15:29:40 by mawal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* remove this to run the main
int	main(void)
{
	int	result;
	int	remainder;

	ft_div_mod(9, 3, &result, &remainder);
	printf("The result is %d. The remainder is %d", result, remainder);
}*/
