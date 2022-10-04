/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bycop <bycop@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 07:09:56 by bycop          #+#    #+#             */
/*   Updated: 2020/12/01 21:39:51 by bycop         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int			get_next_line(int fd, char **line);
char		*join_free(char *s1, char *s2);
int			find_index(const char *s, int c);
int			get_line(char *str, char **line, int i);
char		*ft_substr(char const *s, int start, int len);
char		*ft_strdup(const char *src);
size_t		ft_strlen(const char *s);
void		*ft_memcpy(void *dest, const void *src, size_t size);

#endif
