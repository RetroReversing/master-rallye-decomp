extern void func_001C6938(void *a, s32 b);
extern void func_002B2028(void *p);

typedef struct S_func_003B8BC0_arg1 {
    u8 pad0[8];
    struct S_func_003B8BC0_arg1 *left;
    s32 field_0c;
} S_func_003B8BC0_arg1;

typedef struct PoolNode {
    struct PoolNode *next;
    u8 pad4[4];
    void *base;
    s32 count;
    s32 index;
} PoolNode;

typedef struct PoolList {
    PoolNode *head;
} PoolList;

typedef struct PoolOwner8988 {
    u8 pad0[0x48];
    PoolNode **list; /* at 0x48: points to head pointer? asm: lw $2,0x48($4); lw $3,0($2) */
} PoolOwner8988;

typedef struct PoolOwner88F8 {
    u8 pad0[0x44];
    PoolNode **list;
} PoolOwner88F8;

s64 func_003D7B38(void *arg0, s64 arg1) {
    s64 *p = (s64 *)((u8 *)arg0 + 0x10);
    s64 t = *p;
    *p = t & ~arg1;
    return t;
}

void func_003B8BC0(void *arg0, S_func_003B8BC0_arg1 *arg1) {
    while (arg1 != 0) {
        S_func_003B8BC0_arg1 *next;
        func_001C6938(arg0, arg1->field_0c);
        next = arg1->left;
        func_002B2028(arg1);
        arg1 = next;
    }
}

void *func_003B8988(PoolOwner8988 *arg0) {
    PoolNode **headp = arg0->list;
    PoolNode *node = *headp;
    if (node != (PoolNode *)headp) {
        do {
            s32 count = node->count;
            if (count > 0) {
                void *base = node->base;
                s32 idx = node->index;
                node->count = count - 1;
                node->index = idx + 1;
                return (u8 *)base + (idx << 5);
            }
            node = node->next;
            headp = arg0->list;
        } while (node != (PoolNode *)headp);
    }
    for (;;) {}
}

void *func_003B88F8(PoolOwner88F8 *arg0) {
    PoolNode **headp = arg0->list;
    PoolNode *node = *headp;
    if (node != (PoolNode *)headp) {
        do {
            s32 count = node->count;
            if (count > 0) {
                void *base = node->base;
                s32 idx = node->index;
                node->count = count - 1;
                node->index = idx + 1;
                return (u8 *)base + (idx << 2);
            }
            node = node->next;
            headp = arg0->list;
        } while (node != (PoolNode *)headp);
    }
    for (;;) {}
}
