void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

void *func_002B1FC0(int);
void *func_003D2910(int);

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int data;
} Node;

void func_002324A0(void *arg0, int arg1) {
    Node *list;
    Node *node;

    list = *(Node **)((u8 *)arg0 + 0x14);
    node = (Node *)func_002B1FC0(0xC);
    if (node == (Node *)0) {
        node = (Node *)func_003D2910(0xC);
    }
    if (&node->data != (void *)0) {
        node->data = arg1;
    }
    node->next = list;
    node->prev = list->prev;
    list->prev->next = node;
    list->prev = node;
}

int func_00232520(void *arg0, int arg1) {
    Node *list;
    Node *cur;

    list = *(Node **)((u8 *)arg0 + 0x14);
    cur = list->next;
    if (cur != list) {
        do {
            if (arg1 == cur->data) {
                return 1;
            }
            cur = cur->next;
        } while (cur != list);
    }
    return 0;
}

void func_00231B68(void *);
void func_00231B78(void *);

void func_00232948(void *arg0) {
    Node *list;
    Node *cur;
    Node *list2;
    Node *cur2;

    list = *(Node **)((u8 *)arg0 + 0x14);
    cur = list->next;
    if (cur != list) {
        do {
            void *item = (void *)cur->data;
            func_00231B68(item);
            func_00231B78(item);
            cur = cur->next;
        } while (cur != list);
    }

    list2 = *(Node **)((u8 *)arg0 + 0x18);
    cur2 = list2->next;
    while (cur2 != list2) {
        cur2 = cur2->next;
    }
}
