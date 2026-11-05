#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head = NULL;   // global head: every function can change it

void add_at_end(int data)
{
    struct node *curr = (struct node*)malloc(sizeof(struct node));
    curr->data = data;
    curr->link = NULL;

    if (head == NULL)
    {
        head = curr;
        return;
    }
    struct node *ptr = head;
    while (ptr->link != NULL)
        ptr = ptr->link;
    ptr->link = curr;
}

void del_last()
{
    if (head == NULL)
        return;

    if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
    }
}

int main()
{
    add_at_end(10);
    add_at_end(20);
    add_at_end(30);

    del_last();

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}
