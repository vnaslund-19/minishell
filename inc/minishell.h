/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdarksyderx <xdarksyderx@student.42.fr>	+#+  +:+       +#+		  */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:21:53 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/11 15:13:03 by xdarksyderx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/libft.h"
# include <stdbool.h>
# include <limits.h>
# include <signal.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>

# include "shell.h"
# include "parser.h"
# include "debug.h"
# include "execute.h"
# include "expander.h"

void	ft_sighandler(void);
void	exit_handler(int status, t_shell *shell, char *msg);

# define CMD_NOT_FOUND 127

#endif
