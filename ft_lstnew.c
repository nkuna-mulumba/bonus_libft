/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-11 15:56:16 by jcongolo          #+#    #+#             */
/*   Updated: 2024-12-11 15:56:16 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"  // Inclui o header com a definição da estrutura t_list e a função ft_lstnew

/*
 Função: ft_lstnew
 Esta função cria um novo nó para uma lista encadeada e inicializa seus membros.
 
 Parâmetro: - content: Um ponteiro para o conteúdo que será armazenado no nó.
 Retorno: - Um ponteiro para o novo nó criado, ou NULL em caso de falha na alocação de memória.
*/
t_list *ft_lstnew(void *content)
{
    t_list *new_node;  // Declara um ponteiro para um novo nó do tipo t_list

    // Aloca memória para um novo nó da lista encadeada
    new_node = (t_list *)malloc(sizeof(t_list));
    // Verifica se a alocação de memória falhou
    if (!new_node)
    {
        return (NULL);  // Retorna NULL se a alocação de memória falhou
    }

    // Inicializa o membro content do novo nó com o valor passado como parâmetro
    new_node->content = content;
    // Inicializa o membro next do novo nó como NULL, indicando que é o último nó
    new_node->next = NULL;
    return (new_node);  // Retorna um ponteiro para o novo nó criado
}
/*
int main()
{
    // Imprime o tamanho da estrutura t_list em bytes
    printf("SIZE struct t_list: %zu bytes\n", sizeof(t_list));
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
*/