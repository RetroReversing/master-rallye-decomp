typedef void (*VFunc0C3)(void *, s32, void *);

void func_001FC228(void *arg0) {
    void **s0 = (void **)arg0;

    while (((void ***)s0)[1] != s0) {
        void **cur = (void **)s0[1];
        void **node = (void **)*cur;
        if (node != 0) {
            void **vt = (void **)node[3];
            ((VFunc0C3)vt[3])((u8 *)node + *(s16 *)((u8 *)vt + 8), 3, node);
        }
    }
}

extern void func_003F9698(void *fmt, ...);
extern char D_00478230[];
extern char D_00478248[];

void func_001FC1B8(void *arg0) {
    void **s1 = (void **)arg0;
    void **s0;

    func_003F9698(D_00478230);
    s0 = (void **)s1[1];
    if (s0 != s1) {
        do {
            func_003F9698(D_00478248, s0[0]);
            s0 = (void **)s0[1];
        } while (s0 != s1);
    }
}
