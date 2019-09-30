/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:40:40 by sko               #+#    #+#             */
/*   Updated: 2019/09/19 17:08:50 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns pointer to the first occurrence of c in str[]
** Note that c is passed as its int promotion,
** but it is internally treated as char.
** Application
** Given a string in c++, we need to find the first occurrence of a
** character, lets say ‘a’.
** Examples:
** Input : str[] = 'This is a string'
** Output : 9
** Input : str[] = 'My name is Ayush'
** Output : 4
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		++s;
	}
	if (c == '\0')
		return ((char*)s);
	return (0);
}
