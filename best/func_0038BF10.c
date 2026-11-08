typedef struct Node Node;
typedef struct Pair Pair;

struct Pair {
    s16 key;
    s16 value;
};

struct Node {
    Node *next;
    Pair value[1];
};

typedef struct Table {
    s32 unk0;
    Node **buckets;
    Node **buckets_end;
    s32 unkC;
    s32 count;
} Table;

extern void func_00152F88(Table *, s32);
extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);

Pair *func_0038BF10(Table *t, Pair *arg1) {
    s16 key;
    Node *node;
    Node *old;
    Pair *value;
    u32 index;

    func_00152F88(t, t->count + 1);
    key = arg1->key;
    index = (u32)key % (u32)(t->buckets_end - t->buckets);
    old = t->buckets[index];
    node = old;
    if (old != NULL) {
        while (node->value[0].key != key) {
            node = node->next;
            if (node == NULL)
                goto alloc;
        }
        return node->value;
    }
alloc:
    node = (Node *)func_002B1FC0(8);
    if (node == NULL)
        node = (Node *)func_003D2910(8);
    value = node->value;
    node->next = NULL;
    if (value != NULL)
        *value = *arg1;
    node->next = old;
    t->buckets[index] = node;
    t->count = t->count + 1;
    return value;
}
