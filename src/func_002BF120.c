extern s32 ReferThreadStatus_2(s32, void *);
extern s32 TerminateThread_2(s32);
extern s32 DeleteThread_2(s32);

void func_002BF120(void *arg0) {
    s32 tid = *(s32 *)arg0;
    if (tid > 0) {
        s32 st[12];
        ReferThreadStatus_2(tid, st);
        if (st[0] != 0x10) {
            TerminateThread_2(*(s32 *)arg0);
        }
        DeleteThread_2(*(s32 *)arg0);
        *(s32 *)arg0 = -1;
    }
}

/* func_002BF2D0 - try different arg save order */
typedef void (*VFunc_2BF2D0)(void *, s32);

extern s32 func_002BF110(void);
extern void func_002B2028(void *);

void func_002BF2D0(void *arg0, s32 arg1) {
    s32 a1;
    void *self;
    if (func_002BF110() != 0) {
        void *v = *(void **)((char *)arg0 + 0xC);
        VFunc_2BF2D0 fn = *(VFunc_2BF2D0 *)((char *)v + 0x34);
        s16 adj = *(s16 *)((char *)v + 0x30);
        self = arg0;
        a1 = arg1;
        fn((char *)self + adj, a1);
        if (a1 != 0) {
            void *p = *(void **)((char *)self + 4);
            if (p != 0) {
                func_002B2028(p);
                *(void **)((char *)self + 4) = 0;
            }
        }
    }
}
