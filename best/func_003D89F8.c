extern void *D_0043A908;

typedef struct Node {
    char pad0[0x10];
    unsigned int unk10;
    unsigned int unk14;
    char pad18[0x1C];
    struct Node *next;
    char pad38[0x18];
    void *vtable;
} Node;

s32 func_003D89F8(void) {
    Node *node;
    s32 ret = 0;
    s32 v0;
    
    node = D_0043A908;
    if (node == 0) {
        return 0;
    }
    {
        unsigned int v1 = node->unk14;
        while (1) {
            if (node->unk10 < v1) {
                s32 (*fn)(Node *, int) = *(s32 (**)(Node *, int))((char *)node->vtable + 0x14);
                v0 = fn(node, -1);
                if (v0 == 0) {
                    ret = -1;
                }
            }
            node = node->next;
            if (node == 0) break;
            v1 = node->unk14;
        }
    }
    return ret;
}
