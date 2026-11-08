typedef unsigned char u8;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int data;
} Node;

void func_00231B68(void *);
void func_00231B78(void *);

void func_00232948(void *arg0) {
    Node *list = *(Node **)((u8 *)arg0 + 0x14);
    Node *cur = list->next;
    if (cur != list) {
        do {
            void *item = (void *)cur->data;
            func_00231B68(item);
            func_00231B78(item);
            cur = cur->next;
            list = *(Node **)((u8 *)arg0 + 0x14);
        } while (cur != list);
    }
    {
        Node *list2 = *(Node **)((u8 *)arg0 + 0x18);
        Node *cur2 = list2->next;
        while (cur2 != list2) {
            cur2 = cur2->next;
        }
    }
}
