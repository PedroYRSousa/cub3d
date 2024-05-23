/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_set_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:56:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 03:31:20 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "libft.h"
#include "game.h"
#include "system.h"
#include <stdlib.h>

static void	error(char *line, char **split)
{
	free(line);
	if (split)
		ft_clear_matrix((void ***)&split);
	system_error(ERROR_COLOR);
}

static char	*get_first_number_reference(char *line)
{
	char	*aux;

	aux = ft_strchr(line, 'F');
	if (aux == NULL)
		aux = ft_strchr(line, 'C');
	aux++;
	while (*aux == ' ')
		aux++;
	return (aux);
}

static void	check_syntax(char *line)
{
	char			*aux;
	char			*comma;
	ULONGLONG		index;
	const char		*allow_caracteres = "1234567890, ";

	index = 1;
	comma = ft_strchr(line, ',');
	while (comma)
	{
		comma = ft_strchr(comma + 1, ',');
		if (comma)
			index++;
	}
	if (index != 2)
		error(line, NULL);
	aux = get_first_number_reference(line);
	index = 0;
	while (index < ft_strlen(aux))
	{
		if (ft_strchr(allow_caracteres, aux[index]) == NULL)
			error(line, NULL);
		index++;
	}
}

static void	check_and_set_values(char *line, char **split, int *colors)
{
	int	index;
	int	color;

	index = 0;
	while (split[index])
	{
		color = ft_atoi(split[index]);
		if (color > 255 || color < 0)
			error(line, split);
		else
			colors[index] = color;
		index++;
	}
}

void	game_set_color(char	*line)
{
	char	**split;
	int		*colors;

	check_syntax(line);
	if (ft_strchr(line, 'F'))
		colors = game_instance()->floor_color;
	else
		colors = game_instance()->ceill_color;
	split = ft_split(get_first_number_reference(line), ',');
	check_and_set_values(line, split, colors);
	ft_clear_matrix((void ***)&split);
}
