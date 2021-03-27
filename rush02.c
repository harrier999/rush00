/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunklee <hyunklee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:19:23 by hyunklee          #+#    #+#             */
/*   Updated: 2021/03/27 17:08:22 by hyunklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int a, int b);
void ft_putchar(char c);
void all_lines(int i, int j, int a, int b);
void checking_int(int a, int b);

int	main(void)
{
	rush(-31, 3);
	return (0);
}
void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	rush(int a, int b)
{
	checking_int(a,b);
	int i;
	int j;
	i = 0;
	j = 0;
	while( i < b)
	{
		while (j < a)
		{
				all_lines(i,j,a,b);
				j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;		
	}
}
void checking_int(int a, int b)
{
	if(a <= 0 || b <= 0)
		ft_putchar('0');
	else
		return;
}

void all_lines(int i, int j, int a, int b)
{
	if ( i == 0)
	{	
		if (j == 0 || j == a-1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (i == b-1)
		{
			if(j == 0 || j == a-1)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
	else
	{	if (j == 0 || j == a - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
