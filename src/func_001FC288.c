typedef void (*VFunc14)(void *);
typedef void (*VFunc0C)(void *, s32);

void func_001FC288(void *arg0) {
    void **s1 = (void **)arg0;

    while (((void ***)s1)[1] != s1) {
        void **node = (void **)*((void ***)s1)[1];
        void **prev = (void **)node[1];
        void **next = (void **)node[2];
        prev[2] = next;
        next[1] = prev;
        node[1] = node;
        node[2] = node;
        {
            void **vt = (void **)node[3];
            ((VFunc14)vt[5])((u8 *)node + *(s16 *)((u8 *)vt + 0x10));
        }
        if (node) {
            void **vt = (void **)node[3];
            ((VFunc0C)vt[3])((u8 *)node + *(s16 *)((u8 *)vt + 8), 3);
        }
    }
}
