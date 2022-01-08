#include "libft.h"

static int	ft_c_words(char const *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			word++;
		i++;
	}
	return (word);
}

static char	**ft_alloc_mem(char const *s, char c, char **rtn)
{
	int	i;
	int	alloc;
	int	x;

	x = 0;
	alloc = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			alloc++;
		if ((s[i] == c && (s[i + 1] != c || !s[i + 1]))
			|| (s[i] != c && !s[i + 1]))
		{
			rtn[x++] = (char *) malloc ((alloc + 1) * sizeof (char));
			if (!&rtn[x - 1])
				return (NULL);
			alloc = 0;
		}
		i++;
	}
	rtn[x] = 0;
	return (rtn);
}

static char	**ft_alloc_value(char const *s, char c, char **rtn)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			rtn[j][k++] = s[i];
		}
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
		{
			rtn[j][k] = 0;
			j++;
			k = 0;
		}
		i++;
	}
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	int		word;

	word = ft_c_words(s, c);
	rtn = (char **) malloc ((word + 1) * (sizeof (rtn)));
	if (!rtn)
		return (NULL);
	rtn = ft_alloc_mem (s, c, rtn);
	if (!rtn)
		return (NULL);
	rtn = ft_alloc_value (s, c, rtn);
	if (!rtn)
		return (NULL);
	return (rtn);
}
