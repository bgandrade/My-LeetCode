#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode *last = head;
    struct ListNode *node = head->next;

    while (node)
    {
        if (last->val != node->val)
        {
            last->next = node; // aponta para o node atual
            last = node;       // atualiza o ponteiro para o último node válido
        }
        node = node->next; // move o ponteiro do node para o próximo
        last->next = NULL; // remove a referencia no last
    }
    return head;
}

int main()
{
    // teste
    struct ListNode n5 = {3, NULL};
    struct ListNode n4 = {3, &n5};
    struct ListNode n3 = {2, &n4};
    struct ListNode n2 = {1, &n3};
    struct ListNode n1 = {1, &n2};

    struct ListNode *head = &n1;

    head = deleteDuplicates(head);

    return 0;
}