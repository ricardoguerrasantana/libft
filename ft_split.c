/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:06:30 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/20 18:34:39 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* this function taks string and char c 
return the number of word in the string */
static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			i++;
		}
		else
		{
			count++;
			while (str[i] && str[i] != c)
			{
				i++;
			}
		}
	}
	return (count);
}
/* this function take the word, string, index and 
lenght as input. copies the character in word from stirng starting 
and store the in the word array */

static char	*put_word(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}
/* taks stirng, char an array string number of word 
input iterate over the string and count the length 
and store them in an array */

static char	**split_words(char const *str, char c, char **str2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			i++;
			word_len++;
		}
		str2[word] = (char *)malloc(sizeof(char) * (word_len +1));
		if (!str2[word])
			return (0);
		put_word(str2[word], str, i, word_len);
		word_len = 0;
		word++;
	}
	str2[word] = 0;
	return (str2);
}
/* this function take string s and a character c 
as inpur and return an array of string that are 
saperted by character c */

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	split_words(s, c, s2, num_words);
	if (!s2)
		return (0);
	return (s2);
}
