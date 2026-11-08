extern void func_001D56C0(void *);
extern s32 D_004262A4;
extern void *D_002AD408(s32);
extern void *func_001D57C8(void *);
typedef struct { void *b; void *e; void *c; } V;
extern void func_00155DB0(V *, void *, void *);

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if ((v != (s32 *)arg0) && (v != (s32 *)arg0)) {
        ret = *v;
    }
    return ret;
}

void func_001D58B0(void *arg0) {
    void *head = (char *)arg0 + 8;
    void *node = *(void **)((char *)head + 4);
    if (node != head) {
        do {
            func_001D56C0(*(void **)node);
            node = *(void **)((char *)node + 4);
        } while (node != head);
    }
}

void *func_001D5900(void) {
    if (D_004262A4 == 0) {
        D_004262A4 = (s32)func_001D57C8(D_002AD408(0x14));
    }
    return (void *)D_004262A4;
}

void func_001D1768(char *arg0, void *arg1) {
    V *v = (V *)(arg0 + 0x30);
    void *e = v->e;
    if (e != v->c) {
        if (e != 0) {
            *(int *)e = *(int *)arg1;
        }
        v->e = (char *)v->e + 4;
    } else {
        func_00155DB0(v, e, arg1);
    }
}
