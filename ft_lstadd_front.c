/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 16:10:11 by jcongolo          #+#    #+#             */
/*   Updated: 2024-12-16 16:10:11 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/*
	Função: ft_lstadd_front
	Adiciona o nó 'new' ao início da lista 'lst'.
	
	Parâmetros:
	- lst: O endereço de um ponteiro para o primeiro nó de uma lista.
	- new: Um ponteiro para o nó a ser adicionado ao início da lista.

	Valor devolvido: Nada.
*/

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
	{
        return;  // Se new é NULL, não faz nada
    }
    new->next = *lst;  // O próximo nó de 'new' será o nó atualmente apontado por 'lst'
    *lst = new;        // 'lst' agora aponta para 'new', tornando-o o novo primeiro nó da lista
}
/*
int main() {
    // Cria três nós usando a função ft_lstnew
    t_list *node1 = ft_lstnew("Primeiro Nó");
    t_list *node2 = ft_lstnew("Segundo Nó");
    t_list *node3 = ft_lstnew("Terceiro Nó");

    // Inicializa a lista com o primeiro nó
    t_list *lista = node1;
    
    // Adiciona o segundo nó ao início da lista
    ft_lstadd_front(&lista, node2);
    
    // Adiciona o terceiro nó ao início da lista
    ft_lstadd_front(&lista, node3);
    
    // Imprime os conteúdos da lista encadeada
    t_list *current = lista;
    while (current != NULL) // Continua enquanto current não for NULL
	{
        printf("Conteúdo: %s\n", (char *)(current->content)); // Imprime o conteúdo do nó atual
        current = current->next; // Avança para o próximo nó da lista
    }

    // Libera a memória (opcional, mas boa prática)
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/