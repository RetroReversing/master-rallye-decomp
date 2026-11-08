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
extern Node *func_002AFB50(s32, Node *);

Node *func_002ADF28(s32 index, Node *node, Node *out) {
    Node *r = func_002AFB50(index, out);
    if (r == NULL)
        return NULL;
    if (node->tags[r->unk298] != 0) {
        s64 v = *(s64 *)func_002ADE20(r->unk298, node, NULL);
        r->base = v;
    } else {
        r->base = node->base;
    }
    r->base += r->unk08;
    return r;
}
