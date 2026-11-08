typedef struct Node { struct Node *next, *prev; } Node;
typedef struct { Node *head; } List;
extern void func_002B2028(void *);
void func_003EDD90(List *list) {
    Node *head = list->head;
    Node *n = head->next;
    while (n != list->head) {
        Node *next = n->next;
        func_002B2028(n);
        n = next;
    }
    list->head->next = list->head;
    list->head->prev = list->head;
}
