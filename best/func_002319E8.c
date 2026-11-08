typedef struct Node { struct Node *next; struct Node *prev; s32 value; } Node;

extern Node *func_002B1FC0(s32);
extern Node *func_003D2910(s32);
extern f32 D_00426508[];

s32 func_00231A68(void *arg0, s32 arg1) {
    Node *s = *(Node **)((char *)arg0 + 0x34);
    Node *n = s;
    while ((n = n->next) != s) {
        if (n->value == arg1)
            return 1;
    }
    return 0;
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

void *func_00231B90(void *arg0) {
    Node *n;
    char *o = (char *)arg0;
    *(f32 *)(o + 0x0) = D_00426508[0];
    *(f32 *)(o + 0x4) = D_00426508[1];
    *(f32 *)(o + 0x8) = D_00426508[2];
    *(s32 *)(o + 0xC) = 0;
    *(s32 *)(o + 0x10) = -1;
    n = func_002B1FC0(0xC);
    if (n == NULL)
        n = func_003D2910(0xC);
    *(Node **)(o + 0x14) = n;
    n->next = n;
    (*(Node **)(o + 0x14))->prev = *(Node **)(o + 0x14);
    n = func_002B1FC0(0xC);
    if (n == NULL)
        n = func_003D2910(0xC);
    *(Node **)(o + 0x18) = n;
    n->next = n;
    (*(Node **)(o + 0x18))->prev = *(Node **)(o + 0x18);
    return arg0;
}

void func_002319E8(void *arg0, s32 arg1) {
    Node *lst[1];
    Node *tmp[1];
    Node *n;
    s32 *v;
    lst[0] = *(Node **)((char *)arg0 + 0x34);
    n = func_002B1FC0(0xC);
    if (n == NULL)
        n = func_003D2910(0xC);
    v = (s32 *)((char *)n + 8);
    if (v != NULL)
        *v = arg1;
    n->next = lst[0];
    n->prev = lst[0]->prev;
    lst[0]->prev->next = n;
    lst[0]->prev = n;
    tmp[0] = n;
}
