/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:46:39 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/04 19:45:36 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
int main (void)
{
	unsigned int i;

	i = 126;
	printf("%d", ft_isprint(i));
}*/
