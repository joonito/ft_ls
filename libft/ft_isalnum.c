/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:21:32 by julee             #+#    #+#             */
/*   Updated: 2018/08/09 13:48:45 by julee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z')
			|| ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}
