void func_00200250(void *arg0) {
    ((s32 *)arg0)[8] = 0;       /* +0x20 */
    ((f32 *)arg0)[7] = 1.0f;    /* +0x1C */
    ((s32 *)arg0)[2] = 1;       /* +0x08 */
}

void func_001FC288(void *arg0) {
    void **cur;
    void **node;

    while ((cur = ((void ***)arg0)[1]) != (void **)arg0) {
        node = (void **)*cur;
        /* unlink node from circular list */
        {
            void **prev = (void **)node[1];
            void **next = (void **)node[2];
            prev[2] = next;
            next[1] = prev;
            node[1] = node;
            node[2] = node;
        }
        /* call destructor-like vfunc at +0x14 with (node + offset_at_0x10) */
        {
            void **vt = (void **)node[3]; /* +0xC */
            s16 off = *(s16 *)((u8 *)vt + 0x10);
            ((void (*)(void *))vt[5])((u8 *)node + off);
        }
        if (node != 0) {
            void **vt = (void **)node[3]; /* +0xC */
            s16 off = *(s16 *)((u8 *)vt + 8);
            ((void (*)(void *, s32))vt[3])((u8 *)node + off, 3);
        }
    }
}

void func_001FC228(void *arg0) {
    void **cur;
    void **node;

    while ((cur = ((void ***)arg0)[1]) != (void **)arg0) {
        node = (void **)*cur;
        if (node != 0) {
            void **vt = (void **)node[3]; /* +0xC */
            s16 off = *(s16 *)((u8 *)vt + 8);
            ((void (*)(void *, s32, void *))vt[3])((u8 *)node + off, 3, node);
        }
    }
}

extern void func_003F9698(void *fmt, ...);
extern char D_00478230[];
extern char D_00478248[];

void func_001FC1B8(void *arg0) {
    void **node;

    func_003F9698(D_00478230);
    node = (void **)((void **)arg0)[1];
    if (node != (void **)arg0) {
        do {
            func_003F9698(D_00478248, node[0]);
            node = (void **)node[1];
        } while (node != (void **)arg0);
    }
}
