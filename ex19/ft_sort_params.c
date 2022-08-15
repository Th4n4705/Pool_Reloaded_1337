/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twakrim <taha.wakrim.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:14:12 by twakrim           #+#    #+#             */
/*   Updated: 2018/10/04 13:32:06 by twakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	**sortfunction(int argc, char **argv)
{
	int		sort;
	char	*tmp;
	int		j;

	sort = 1;
	while (sort == 1)
	{
		sort = 0;
		j = argc - 1;
		while (j > 0)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0 && j != 0)
			{
				tmp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = tmp;
				sort = 1;
			}
			j--;
		}
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**argf;

	j = 1;
	argf = sortfunction(argc, argv);
	while (j < argc)
	{
		i = 0;
		while (argf[j][i] != '\0')
		{
			ft_putchar(argf[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
