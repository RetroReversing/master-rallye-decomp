extern void func_00230098(s32, s32);
extern s32 func_002330E8(void *, void *);
extern s32 func_00232380(void *, void *);
extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);
extern char D_00479A08[];

void func_00230058(s32 arg0, s32 *arg1)
{
    func_00230098(arg0, *arg1);
}

s32 func_0022F920(u8 *arg0, void *arg1)
{
    s32 n = (s32)(*(u8 **)(arg0 + 0x2C) - *(u8 **)(arg0 + 0x28)) >> 4;
    s32 i;

    if (n > 0) {
        for (i = 0; i < n; i++) {
            if (func_002330E8(*(u8 **)(arg0 + 0x28) + i * 16, arg1))
                return 0;
        }
    }
    return 1;
}

typedef struct {
    u8 b[0x1C];
} E28;

typedef struct {
    u8 pad[0x10];
    E28 *begin;
    E28 *end;
} V28;

s32 func_0022F9A8(V28 *v, void *arg1)
{
    s32 n = v->end - v->begin;
    s32 i;

    if (n > 0) {
        for (i = 0; i < n; i++) {
            if (func_00232380((void *)(v->begin + i), arg1) == 0)
                return 1;
        }
    }
    return 0;
}

typedef struct Node {
    struct Node *first;
    struct Node *next;
} Node;

Node *func_00230A10(s32 arg0, Node *arg1, Node **arg2)
{
    s32 d = (s32)&D_00479A08;
    u8 *loc = (u8 *)arg1 + 0x14;
    Node *p;

    if (func_001D24B8(loc, 0, func_001CE2F8(loc), (void *)d) != -1)
        return arg1;
    p = arg1->first;
    if (p == NULL)
        return arg1;
    do {
        Node *r;

        *arg2 = arg1;
        r = func_00230A10(arg0, p, arg2);
        if (r != NULL)
            return r;
        p = p->next;
    } while (p != NULL);
    return NULL;
}
