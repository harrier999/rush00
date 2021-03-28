/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwoo <bwoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:27:32 by bwoo              #+#    #+#             */
/*   Updated: 2021/03/28 11:34:22 by hyun-wle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col, int row);
void	ft_putchar(char c);
void	all_lines(int i, int j, int col, int row);
int		check_int(int col, int row);

void	rush(int col, int row)
{
	int i;
	int j;

	if (check_int(col, row))
		return ;
	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < col)
		{
			all_lines(i, j, col, row);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		check_int(int col, int row)
{
	if (col <= 0 || row <= 0)
	{
		ft_putchar('e');
		ft_putchar('r');
		ft_putchar('r');
		ft_putchar('o');
		ft_putchar('r');
		ft_putchar('\n');
		return (1);
	}
	else
		return (0);
}

void	all_lines(int i, int j, int col, int row)
{
	if (i == 0)
	{
		if (j == 0 || j == col - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (i == row - 1)
	{
		if (j == 0 || j == col - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == col - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	return ;
}
