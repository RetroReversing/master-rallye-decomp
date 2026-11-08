typedef struct Node {
    struct Node *next;
    struct Node *prev;
    s32 value;
} Node;

s32 func_00231A68(void *arg0, s32 arg1) {
    Node *sentinel = *(Node **)((char *)arg0 + 0x34);
    Node *node = sentinel->next;
    while (node != sentinel) {
        if (node->value == arg1)
            return 1;
        node = node->next;
    }
    return 0;
}
