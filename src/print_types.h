/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:31:30 by knickel           #+#    #+#             */
/*   Updated: 2023/03/24 12:22:39 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_TYPES_H
# define PRINT_TYEPS_H

# include <unistd.h>
# include <stdarg.h>
# include <libft.h>

int	handle_print_char(va_list *vars);
int	handle_print_string(va_list *vars);
int	handle_print_voidptr( va_list *vars);
int	handle_print_decimal(va_list *vars);
int	handle_print_int(va_list *vars);
int	handle_print_uint(va_list *vars);
int	handle_print_lowhex(va_list *vars);
int	handle_print_uphex(va_list *vars);

#endif