/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:01:13 by emetras-          #+#    #+#             */
/*   Updated: 2023/01/26 14:19:15 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/data.h"

t_list	*new_node(int size);
void	free_nodes(t_list *node);
int		list_size(t_list *list);
int	main(void)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node->data = 1;
	node->next = new_node(-2);
	if (node->next == NULL)
		exit (1);
	node->next->data = 42;
	node->next->next->data = 13;
	
	printf("%d, %d\n", node->next->data, node->next->next->data);
	printf("%d - size\n", list_size(node));
	free_nodes(node);
	
	node = (t_list *)malloc(sizeof(t_list));
	node->next = NULL;
	printf("%d - size \n", list_size(node));
	free_nodes(node);
	node = NULL; // verificar como posso colocar isso no free_node (ou retorno um null se deu free)
	printf("%d - size \n", list_size(node)); //leitura estranha
}

t_list *new_node(int size)
{
	t_list	*node;
	t_list *next; //trocar nome

	if(size <= 0)
		return (NULL);
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL); 
	next = node;
	while (--size)
	{
		next->next = (t_list *)malloc(sizeof(t_list));
		next = next->next;
	}
	next->next = NULL;
	//colocar um ponteiro para NULL no ultimo node
	return (node);
}

void free_nodes(t_list *node)
{
	t_list	*l_next;

	l_next = node;
	if (l_next == NULL)
		return;
	if (l_next->next == NULL)
		return (free(node));
	while (l_next != NULL)
	{
		node = l_next->next;
		free(l_next);
		l_next = node;
	}
	node = NULL;
	return ;
}

int list_size(t_list *list)
{
	t_list	*node;
	int		size;

	size = 0;
	node = list;
	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		size++;
		node = node->next;
	}
	return (size);
}