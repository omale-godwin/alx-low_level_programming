// #include <stdio.h>
// #include "lists.h"

// /**
//  * print_list - prints all the elements of a list_t list
//  * @h: pointer to a constant structure list_t
//  *
//  * Return: number of nodes in the list
//  */
// size_t print_list(const list_t *h)
// {
//     size_t num_nodes = 0;

//     if (h == NULL)
//         return (0);

//     if (h->str == NULL)
//         printf("[0] (nil)\n");
//     else
//         printf("[%zu] %s\n", h->len, h->str);

//     num_nodes++;

//     while (h->next != NULL)
//     {
//         h = h->next;

//         if (h->str == NULL)
//             printf("[0] (nil)\n");
//         else
//             printf("[%zu] %s\n", h->len, h->str);

//         num_nodes++;
//     }

//     return (num_nodes);
// }

#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t num_nodes = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", h->len, h->str);

        h = h->next;
        num_nodes++;
    }

    return (num_nodes);
}