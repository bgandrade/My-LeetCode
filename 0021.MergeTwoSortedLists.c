#include <stdlib.h>
// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *head;
    // if (list1->val > li)
}

int main(void)
{
    struct ListNode n1 = {1, NULL};
    struct ListNode n2 = {2, NULL};
    struct ListNode n3 = {4, NULL};
    n1.next = &n2;
    n2.next = &n3;

    struct ListNode m1 = {1, NULL};
    struct ListNode m2 = {3, NULL};
    struct ListNode m3 = {4, NULL};
    m1.next = &m2;
    m2.next = &m3;

    struct ListNode *list1 = &n1;
    struct ListNode *list2 = &m1;

    struct ListNode *result = mergeTwoLists(list1, list2);

    return 0;
}