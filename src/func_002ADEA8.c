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

extern void *func_002ADE20(s32, Node *, Node *);
extern void *func_003F931C(void *, const void *, s32);

void *func_002ADEA8(s32 idx, Node *from, Node *to) {
    void *src = func_002ADE20(idx, from, NULL);
    void *dst = func_002ADE20(idx, to, NULL);
    s32 size = idx < 0x1F ? 0x10 : (idx <= 0x3F ? 4 : 8);
    return func_003F931C(dst, src, size);
}
