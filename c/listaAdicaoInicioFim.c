#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int dado;
    struct Node *next;
};

int main()
{
    struct Node* inicio = NULL;

    insert_init(&inicio, 2);
    insert_init(&inicio, 1);

    insert_end(&inicio, 3);

    printList(inicio);

    return 0;
}

void insert_init(struct Node** init_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->dado = new_data;
    new_node->next = (*init_ref);
    (*init_ref) = new_node;
}

void insert_end(struct Node** init_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->dado = new_data;
    new_node->next = NULL;

    struct Node* loop_node = *init_ref;

    while(loop_node!= NULL)
    {
        loop_node = loop_node->next;

        if(loop_node->next == NULL)
        {
            loop_node->next = new_node;
            break;
        }
    }
}

void printList(struct Node *node)
{
    printf("lista: \n");
    while(node != NULL)
    {
        printf("%d\n", node->dado);
        node = node->next;
    }
}
