typedef struct Node {
    s32 base;
    s32 unk04;
    s32 unk08;
    s32 unk0C;
    s32 unk10;
    s32 unk14;
    s64 entries[80];
    u16 unk298;
    u16 count;
    s8 tags[80];
} Node;

extern void *func_003F7300(void);

void *func_002ADE20(s32 idx, Node *node, Node *prev) {
    s32 cur = idx;
    if (node->tags[cur] == 2) {
        do {
            cur = (s32)node->entries[cur];
        } while (node->tags[cur] == 2);
    }
    if (node->tags[cur] == 1)
        return (void *)(node->base + *(s32 *)((u8 *)node + (cur << 3) + 0x18));
    return func_003F7300();
}
