/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:52:36 by valyssa-          #+#    #+#             */
/*   Updated: 2024/08/11 20:36:24 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] != '\0' || s2[i] != '\0')
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

int main()
{
	char str1[] = "ovvxhqyenb49hlu8jcaetapm";
	char str2[] = "";

	printf("%d\n", ft_strncmp(str1, str2, 20));
	printf("%d", strncmp(str1, str2, 20));
}
