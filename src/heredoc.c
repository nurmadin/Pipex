/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:57:30 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/08/15 16:59:37 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	heredoc(t_pipex *pipex)
{
	char	*line;

	while (1)
	{
		ft_printf("heredoc> ");
		line = get_next_line(0);
		if (!line)
			break ;
		if (!ft_strncmp(line, pipex->limiter, ft_strlen(pipex->limiter)))
		{
			free(line);
			break ;
		}
		write(pipex->fd_pipes[1], line, ft_strlen(line));
		free(line);
	}
}
