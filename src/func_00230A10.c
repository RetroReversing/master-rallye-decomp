extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);
extern char D_00479A08[];

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
    if (p != NULL) {
        do {
            Node *r;

            *arg2 = arg1;
            r = func_00230A10(arg0, p, arg2);
            if (r != NULL)
                return r;
            p = p->next;
        } while (p != NULL);
    }
    return NULL;
}
