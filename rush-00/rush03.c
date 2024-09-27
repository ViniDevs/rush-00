/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:45:56 by marvin            #+#    #+#             */
/*   Updated: 2021/12/04 21:47:57 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void rush(int x, int y)
{
    int height = 1;
    int width;

    while (height <= y)
    {
        width = 1;
        while (width <= x)
        {
            if (width == 1 && (height == 1 || height == y))
            {
                ft_putchar('A');
            }
            else if (width == x && (height == 1 || height == y))
            {
                ft_putchar('C');
            }
            else if (width == 1 || width == x || height == 1 || height == y)
            {
                ft_putchar('B');
            }
            else
            {
                ft_putchar(' ');
            }
            ++width;
        }
        ft_putchar('\n');
        ++height;
    }
}