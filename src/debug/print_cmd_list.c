#include "../../inc/minishell.h"

void	debug_print_command(t_command *cmd)
{
	int	i = 0;

	if (!cmd)
	{
		printf("cmd is NULL\n");
		return ;
	}
	if (cmd)
	{
		printf("  Args");
		while (cmd->args[i])
			printf(": %s\n", cmd->args[i++]);
		printf("  Stdin redirect: %s\n", cmd->stdin_redirect);
		printf("  Stdout redirect: %s\n", cmd->stdout_redirect);
		printf("  append mode: %i\n", cmd->append);
		printf("  heredoc: %i\n", cmd->heredoc);
		printf("  delimiter: %s\n", cmd->delimiter);
		printf("\n");
	}
}

void	debug_print_cmd_list(t_command *cmd_list)
{
	t_command	*current = cmd_list;

	printf("Command List:\n");
	while (current)
	{
		debug_print_command(current);
		current = current->next;
	}
}
