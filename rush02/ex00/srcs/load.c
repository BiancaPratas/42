/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 21:43:41 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 00:20:10 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DICT "../numbers.dict"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h> 

int g_fd;
int g_eof;

typedef struct s_number
{
	char *number;
	char *letters;
}				t_number;

int		count_lines();
void	allocate(t_number *dict, char **buff);
void	assign(t_number *dict);
char		*readline(int file);

int		is_white_space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

//void	allocate(t_number *dict, char **buff)
//{

//}

void	place_key(char *tmp, t_number *dict)
{
	dict = (t_number*)malloc(sizeof(t_number));
	dict[0].number = tmp;
}

void	clean_lines(char *buff, int lines, t_number *dict)
{
	char *begin;
	char *end;
	char *tmp;
	int lenght;

	begin = buff;
	end = buff;
	//i = 0;
	lenght = 0;
	while (*end != ':')
	{
		lenght++;
		end++;
	}
	/*while (!is_white_space(*end))
	{
		lenght++;
		end++;
	}*/
	if (!(tmp = malloc(lenght * sizeof(char))))
		return ;
	while(*begin != *end && *end != 0 && *begin != 0)
	{
		*tmp = *begin;
		begin++;
	}
	printf("%s\n", tmp);
	place_key(tmp, dict);
}

int		count_lines()
{
	char *tmp;
	int i;
	int count;
	int fd;

	i = 0;
	count = 0;
	if (!(tmp = malloc(1024 + 1)))
		return (0);
	fd = open(DICT, O_RDONLY);
	while(read(fd, &tmp[i], 1))
	{
		if (tmp[i] == '\n' && tmp[i - 1] == '\n')
			count--;
		if (tmp[i] == '\n')
			count++;
		i++;
	}
	free(tmp);
	close(fd);
	return (count);
}

t_number	*load(char *file)
{
	int line_count;
	char **buff;
	int i = 0;
	int j = 0;

	t_number *dict;
	line_count = count_lines();
	g_fd = open(DICT, O_RDONLY);
	if (!(buff = malloc(1024 * line_count)))
		return (0);
	while ((buff[i] = readline(g_fd)))
	{
		if (g_eof++)
			break ;
		if (buff[i--][0] == 0)
		i++;
	}
	if (!(dict = malloc((line_count + 1) * sizeof(t_number))))
		return (0);
	close(g_fd);
	i = 0;
	while (i < line_count)
		clean_lines(buff[i++], line_count, dict);
	printf("%s\n", dict[0].number);
	//allocate(dict, buff);
	//assign(dict);
	return (dict);
}

/*int		count_lines(char *file)
{
	int file = open(DICT, O_RDONLY);
//	read(file, buff, 100);
	
	close(file);*/
//	int file2 = open(dict, O_RDONLY);
//	read(file2, buff2, 100);
//	while (*buff2 != '\n')
//	{
//		write(1, buff2, 1);
//		buff2++;
//	}
//	close(file2);
//}

char		*readline(int g_fd)
{
	char *line;
	int i;

	i = 0;
	if (!(line = malloc(1024 + 1)))
		return (0);
	while (read(g_fd, &line[i], 1))
	{
		g_eof = 0;
		if (i == 1024)
		{
			free(line);
			return (0);
		}
		if (!(line[0] >= '0' && line[0] <= '9'))
		{
			line[0] = 0;
			return line;
		}
		if (line[i] == '\n')
		{
			line[i] = 0;
			break ;
		}
		i++;
	}
	return (line);
}

int		main(int argc, char *argv[])
{
	char		*number;
	char		*file;
	t_number	*dict;

	/*if (!(argc == 2 || argc == 3))
	{
		write(1, "error\n", 6);
		return (1);
	}*/
	file  = DICT;
	number = (argc == 2) ? argv[1] : argv[2];
	//file = ((argc == 3) ? argv[1] : DICT);
	/*if (!is_nb_valid(number))
	{
		write(1, "error\n", 6);
		return (2);
	}*/
	/*if (!is_dict_valid(file))
	{
		write(1, "Dict Error\n", 11);
		return (3);
	}*/
	dict = load(file);
	/*if (!is_number_possible(number, dict))
	{
		write(1, "Dict Error\n", 11);
		return (4);
	}
	write_nb(number, dict);
	unload(file);*/
	return (0);
}
