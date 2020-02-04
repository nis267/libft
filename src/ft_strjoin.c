/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dewalter <dewalter@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 21:38:21 by dewalter     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 21:38:22 by dewalter    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		indexs1;
	int		indexs2;
	char	*str;

	indexs1 = -1;
	indexs2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (len_s1 + len_s2))))
		return (NULL);
	while (indexs1 < len_s1 && s1[++indexs1])
		str[indexs1] = s1[indexs1];
	while (indexs1 < (len_s1 + len_s2) && s2[indexs2])
	{
		str[indexs1] = s2[indexs2];
		indexs1++;
		indexs2++;
	}
	str[indexs1] = '\0';
	return (str);
}
