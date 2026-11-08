typedef struct Node {
    struct Node *next;
    struct Node *prev;
    s32 value;
} Node;

typedef struct CDLink {
    f32 x;
    f32 y;
    f32 z;
    s32 f0C;
    s32 f10;
    Node *l14;
    Node *l18;
} CDLink;

extern f32 D_00426508[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

CDLink *func_00231B90(CDLink *o) {
    Node *n;
    o->x = D_00426508[0];
    o->y = D_00426508[1];
    o->z = D_00426508[2];
    o->f0C = 0;
    o->f10 = -1;
    n = func_002B1FC0(0xC);
    if (n == NULL)
        n = func_003D2910(0xC);
    o->l14 = n;
    n->next = n;
    n->prev = n;
    n = func_002B1FC0(0xC);
    if (n == NULL)
        n = func_003D2910(0xC);
    o->l18 = n;
    n->next = n;
    n->prev = n;
    return o;
}

s32 func_00231B48(void *arg0, s32 arg1) {
    Node *p = *(Node **)((char *)arg0 + 0x30);
    Node *c = p->next;
    Node *d = c->next;
    s32 vc = c->value;
    s32 vd = d->value;
    return (arg1 == vc) ? vd : vc;
}

s32 func_00231B00(void *arg0, void *arg1) {
    Node *pA = *(Node **)((char *)arg0 + 0x30);
    Node *pB = *(Node **)((char *)arg1 + 0x30);
    Node *c = pA->next;
    Node *e = pB->next;
    Node *d = c->next;
    Node *g = e->next;
    s32 vc = c->value;
    s32 ve = e->value;
    s32 vd = d->value;
    if (vc == ve || vc == g->value)
        return vc;
    return vd;
}

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
