/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahernan <sahernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:41:52 by sahernan          #+#    #+#             */
/*   Updated: 2024/01/30 10:56:36 by sahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	size_t	j;
	size_t	i;
	char	*dest;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	dest = malloc(total_size + 1);
	if (!dest)
		return (0);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char a[] = "Santiago";
	char b[] = "Hernandez";
	printf("%s", ft_strjoin(a, b));
}
*/
