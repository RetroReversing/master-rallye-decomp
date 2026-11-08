extern void *D_0043A908;

typedef struct Node {
    unsigned int unk0;
    char pad4[0xC];
    unsigned int unk10;
    unsigned int unk14;
    char pad18[0x1C];
    struct Node *next;
    char pad38[0x18];
    void *vtable;
} Node;

void func_003D8AE0(void) {
    Node *cur = (Node *)D_0043A908;
    if (cur == NULL) return;
    do {
        if ((cur->unk0 & 0x2) == 0) {
            void (*fn)(Node *, int, int) = *(void (**)(Node *, int, int))((char *)cur->vtable + 0x54);
            fn(cur, 0, 0);
        }
        cur = cur->next;
    } while (cur != NULL);
}
