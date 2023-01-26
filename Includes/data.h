/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:56:18 by emetras-          #+#    #+#             */
/*   Updated: 2023/01/25 14:39:06 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include <stdlib.h>
# include <stdio.h>


typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;



#endif
