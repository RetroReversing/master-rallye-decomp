extern void *D_0043A908;

typedef struct Node {
    unsigned long long unk0;
    char pad8[0x8];
    unsigned int unk10;
    unsigned int unk14;
    char pad18[0x1C];
    struct Node *next;
    char pad38[0x18];
    void *vtable;
} Node;

void func_003D8A78(void) {
    Node *cur = (Node *)D_0043A908;
    if (cur == NULL) return;
    do {
        if ((cur->unk0 & 0x208) == 0x200) {
            void (*fn)(Node *, int) = *(void (**)(Node *, int))((char *)cur->vtable + 0x14);
            fn(cur, -1);
        }
        cur = cur->next;
    } while (cur != NULL);
}
