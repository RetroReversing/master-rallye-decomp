extern void *(*D_00426AC4)(void);
extern void func_002AD758(void);

typedef struct {
    void *unk0;
    void (*unk4)(void *, int);
    void *unk8;
} Node;

void func_002AD918(void) {
    void *sp640;
    void **sp644;
    void **sp648;
    void *sp64c;
    struct {
        void *a;
        void *b;
        void *c;
    } buf;
    int ret;
    char *ctx;
    char *q;

    ctx = (char *)D_00426AC4();
    sp640 = ctx;
    sp644 = (void **)(ctx + 4);
    q = *(char **)sp644;
    sp648 = (void **)(q + 4);

    if (*(void **)sp648 != 0) {
        buf.a = q;
        buf.b = 0;
        buf.c = &buf;
        /* simulate setjmp return - this won't generate the inline form */
        ret = __builtin_setjmp(&buf);
        if (ret == 0) {
            sp64c = &buf;
            *sp644 = sp64c;
            {
                Node *n = *(Node **)sp648;
                if (n != 0) {
                    do {
                        *sp648 = n->unk0;
                        n->unk4(n->unk8, 2);
                        n = *(Node **)sp648;
                    } while (n != 0);
                }
            }
            *sp644 = *(void **)sp64c;
        } else {
            func_002AD758();
        }
    }

    {
        char *ctx2 = (char *)D_00426AC4();
        void **p2 = (void **)(ctx2 + 4);
        void *v = *p2;
        if (*(void **)(ctx2 + 8) == 0 || *(void **)v == 0) {
            func_002AD758();
            v = *p2;
        }
        {
            void **x = (void **)((char *)v + 8);
            *p2 = *x;
            __builtin_longjmp(x, 1);
        }
    }
}
