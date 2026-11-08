extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

/* func_002BF2D0 */
typedef void (*VFunc_2BF2D0)(void *, s32);

s32 func_002BF110(void);
void func_002B2028(void *);

void func_002BF2D0(void *arg0, s32 arg1) {
    if (func_002BF110() != 0) {
        void *v = *(void **)((char *)arg0 + 0xC);
        VFunc_2BF2D0 fn = *(VFunc_2BF2D0 *)((char *)v + 0x34);
        fn((char *)arg0 + *(s16 *)((char *)v + 0x30), arg1);
        if (arg1 != 0) {
            void *p = *(void **)((char *)arg0 + 4);
            if (p != 0) {
                func_002B2028(p);
                *(void **)((char *)arg0 + 4) = 0;
            }
        }
    }
}

/* func_002BF120 */
s32 ReferThreadStatus_2(s32, void *);
s32 TerminateThread_2(s32);
s32 DeleteThread_2(s32);

void func_002BF120(void *arg0) {
    s32 tid = *(s32 *)arg0;
    if (tid > 0) {
        s32 status[1];
        ReferThreadStatus_2(tid, status);
        if (status[0] != 0x10) {
            TerminateThread_2(*(s32 *)arg0);
        }
        DeleteThread_2(*(s32 *)arg0);
        *(s32 *)arg0 = -1;
    }
}

/* func_002BF098 */
extern void *D_00480EE0;
void D_002AD390(void *);

void func_002BF098(void *arg0, s32 arg1) {
    void *p;
    *(void **)((char *)arg0 + 0xC) = &D_00480EE0;
    if (func_002BF110() != 0) {
        func_002BF120(arg0);
    }
    p = *(void **)((char *)arg0 + 4);
    if (p != 0) {
        func_002B2028(p);
        *(void **)((char *)arg0 + 4) = 0;
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
