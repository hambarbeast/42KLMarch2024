/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawal <mawal@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:07:07 by mawal             #+#    #+#             */
/*   Updated: 2024/03/21 14:19:39 by mawal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/* remove this to run the main function
int	main(void)
{
	int	test1;
	int	test2;

	test1 = 2;
	test2 = 5;
	ft_swap(&test1, &test2);
	printf("%d, %d", test1, test2);
}*/
