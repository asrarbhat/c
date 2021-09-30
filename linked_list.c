#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *head = NULL;

int addNode(int value)
{
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->value = value;
        head->next = NULL;
        return 0;
    }
    struct node *iter = head;
    while (iter->next != NULL)
    {
        iter = iter->next;
    }
    iter->next = (struct node *)malloc(sizeof(struct node));
    iter->next->value = value;
    iter->next->next = NULL;
    return 0;
}
int removeNode()
{
    if (head == NULL)
    {
        return 1;
    }
    struct node *iter = head;
    struct node *tofree = head;
    while (iter->next != NULL)
    {
        tofree = iter;
        iter = iter->next;
    }
    tofree->next = NULL;
}

int insertNode(int index, int value)
{
    struct node *iter = head;
    struct node *item = (struct node *)malloc(sizeof(struct node));
    if (index == 0)
    {
        item->next = head;
        item->value = value;
        head = item;
        return 0;
    }
    int i = 1;
    while (i < index)
    {
        iter = iter->next;
        i++;
    }
    item->next = iter->next;
    item->value = value;
    iter->next = item;
    return 0;
}

int deleteNode(int index)
{
    struct node *iter = head;
    int i = 1;
    if (index == 0)
    {
        head = head->next;
    }
    while (i < index)
    {
        iter = iter->next;
        i++;
    }
    iter->next = (iter->next)->next;
    return 0;
}

int traverseList()
{
    struct node *iter = head;
    while (iter != NULL)
    {
        printf("%d ", iter->value);
        iter = iter->next;
    }
    printf("\n");
}
#define true 1
int main()
{
    while (true)
    {
        int a;
        printf("1 for add\n2 for remove\n3 for insert\n4 for delete\n");
        scanf("%d", &a);
        if (a == 1)
        {
            int b;
            scanf("%d", &b);
            addNode(b);
        }
        else if (a == 2)
        {
            removeNode();
        }
        else if (a == 3)
        {
            int b, d;
            scanf("%d %d", &b, &d);
            insertNode(b, d);
        }
        else if (a == 4)
        {
            int b;
            scanf("%d", &b);
            deleteNode(b);
        }
        printf("\n");
        traverseList();
        printf("\n");
    }

    return 0;
}