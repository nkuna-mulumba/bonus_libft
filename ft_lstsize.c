/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 17:57:29 by jcongolo          #+#    #+#             */
/*   Updated: 2024-12-16 17:57:29 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/*
	Função: ft_lstlast - Retorna o último nó de uma lista encadeada.

	Parâmetros:
	- lst: Ponteiro para o início da lista.
	Retorno:
	- Ponteiro para o último nó da lista, ou NULL se a lista estiver vazia.
*/
t_list *ft_lstlast(t_list *lst)
{
    if (!lst) {
        return NULL;  // Retorna NULL se a lista estiver vazia
    }
    while (lst->next != NULL)
	{
        lst = lst->next;  // Avança para o próximo nó
    }
    return lst;  // Retorna o último nó da lista
}
/*
int main() {
    // Cria três nós usando a função ft_lstnew
    t_list *node1 = ft_lstnew("Primeiro Nó");
    t_list *node2 = ft_lstnew("Segundo Nó");
    t_list *node3 = ft_lstnew("Terceiro Nó");

    // Liga os nós para formar uma lista
    node1->next = node2;
    node2->next = node3;

    // Obtém o último nó da lista
    t_list *ultimo = ft_lstlast(node1);

    // Verifica e imprime o conteúdo do último nó
    if (ultimo != NULL)
	{
        printf("Último nó: %s\n", (char *)ultimo->content);
		ultimo = ultimo->next;
    }
	else
	{
        printf("A lista está vazia.\n");
    }

    // Libera a memória (opcional, mas boa prática)
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/