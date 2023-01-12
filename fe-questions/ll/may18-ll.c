#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *insert_front(node *head, int item)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = item;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    };

    return head;
}

void markEven(node *head)
{
    if (head != NULL)
    {
        if (head->data % 2 == 0)
        {
            node *tmp = malloc(sizeof(node));
            tmp->data = -1;
            tmp->next = head->next;

            head->next = tmp;
        }

        return markEven(head->next);
    }
}

void display(node* t)
{
  printf("\nPrinting your linked list.......");

  while(t!=NULL)
  {
    printf("%d ", t->data);
    t= t->next;
  }

  printf("\n");	

}

int main(void) {
    node *head = NULL;
    head = insert_front(head, 3);
    head = insert_front(head, 1);
    head = insert_front(head, 7);
    head = insert_front(head, 6);
    head = insert_front(head, 2);

    display(head);
    markEven(head);
    display(head);
}

// 2, 6, 7, 1, 3, and 8, 