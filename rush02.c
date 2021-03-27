/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwoo <bwoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:27:32 by bwoo              #+#    #+#             */
/*   Updated: 2021/03/27 17:37:24 by bwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int a, int b);
void	ft_putchar(char c);
void	all_lines(int i, int j, int a, int b);
void	checking_int(int a, int b);

void	rush(int a, int b)
{
	int i;
	int j;

	checking_int(a, b);
	i = 0;
	j = 0;
	while (i < b)
	{
		while (j < a)
		{
			all_lines(i, j, a, b);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	checking_int(int a, int b)
{
	if (a <= 0 || b <= 0)
		ft_putchar('0');
	else
		return ;
}

void	all_lines(int i, int j, int a, int b)
{
	if (i == 0)
	{
		if (j == 0 || j == a - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (i == b - 1)
	{
		if (j == 0 || j == a - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == a - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
