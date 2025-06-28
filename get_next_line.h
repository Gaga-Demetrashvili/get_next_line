/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdemetra <gdemetra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:53:26 by gdemetra          #+#    #+#             */
/*   Updated: 2025/06/28 14:55:22 by gdemetra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <errno.h> // errno
# include <fcntl.h> // for open
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h> // for exit
# include <string.h> // strerror()
# include <unistd.h> // for read and close

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

void				polish_list(t_list **lst);
void				copy_str(t_list *list, char *line);
int					count_chars(t_list *list);
int					found_newline(t_list *lst);
t_list				*get_last_node(t_list *lst);
char				*get_next_line(int fd);
void				create_list(t_list **lst, int fd);
char				*grab_new_line(t_list **list, char *line);
void				append(t_list **lst, char *buf);
void				clear_list(t_list **lst);

#endif