/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:22:51 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/03/18 14:52:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*free_buffer(char **buffer)
{
	free(*buffer);
	*buffer = NULL;
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	long_s;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	long_s = ft_strlen((char *)s);
	if (start >= long_s)
		return (ft_strdup(""));
	if (len > long_s - start)
		len = long_s - start;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	while (s[start + i] != '\0' && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*read_line(int fd, char *buffer)
{
	char	temp[BUFFER_SIZE + 1];
	char	*buffer_temp;
	int		bytes;

	if (!buffer)
	{
		buffer = ft_calloc(1, sizeof(char));
		if (!buffer)
			return (NULL);
	}
	while (!ft_strchr(buffer, '\n'))
	{
		bytes = read(fd, temp, BUFFER_SIZE);
		if (bytes < 0)
			return (free_buffer(&buffer));
		if (bytes == 0)
			break ;
		temp[bytes] = '\0';
		buffer_temp = ft_strjoin(buffer, temp);
		if (!buffer_temp)
			return (free_buffer(&buffer));
		free(buffer);
		buffer = buffer_temp;
	}
	return (buffer);
}

char	*ft_get_next_line(int fd)
{
	static char		*buffer;
	char			*line;
	char			*temp;
	char			*new_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_line(fd, buffer);
	if (!buffer || *buffer == '\0')
		return (free_buffer(&buffer));
	new_line = ft_strchr(buffer, '\n');
	if (new_line)
	{
		line = ft_substr(buffer, 0, new_line - buffer + 1);
		temp = ft_strdup(new_line + 1);
	}
	else
	{
		line = ft_strdup(buffer);
		temp = NULL;
	}
	free(buffer);
	buffer = temp;
	return (line);
}

//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <fcntl.h>
//  #include <unistd.h>
//  int main(void)
//  {
//      int index = 0;
//      int fd = open("test.txt", O_RDONLY);
//      char *line;
//      while ((line = get_next_line(fd)) != NULL)
//      {
//          index++;
//          printf("%i: %s", index, line);
//          free(line);
//      }
//      close(fd);
//      return 0;
//  }