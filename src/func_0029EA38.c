extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern s32 func_001E4280(void);
extern s32 *func_001E3700(s32, void *);
extern s32 func_001D4010(void *, s32);
extern s32 func_003FA760(s32, s32);
extern void func_0029FA10(void *, s32);

void func_0029F220(void *arg0) {
    s32 sp[4];
    void *p50;
    s32 *ret;
    s32 val;
    s32 v30;
    s32 cond;

    if (*(s32 *)((u8 *)arg0 + 0x50) != 0) {
        p50 = (u8 *)arg0 + 0x50;
        ret = func_001E3700(func_001E4280(), p50);
        sp[0] = ret[0];
        val = func_001D4010(sp, sp[0]);
        v30 = *(s32 *)((u8 *)arg0 + 0x30);
        cond = 0;
        if (v30 != 0) {
            if (val != 0) {
                if (func_003FA760(val, v30) == 0) {
                    cond = 1;
                } else {
                    cond = 0;
                }
            }
        }
        if (cond == 0) {
            s32 v;
            v = func_001D4010(sp, 0);
            func_0029FA10(arg0, v);
        }
    }
}

extern void D_002AD390(s32);

void func_0029EA38(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 v44 = p[0x44 / 4];
    p[0x48 / 4] = 0;
    p[0x4C / 4] = 0;
    D_002AD390(v44);
    p[0x44 / 4] = 0;
    p[0x50 / 4] = 0;
    p[0x5C / 4] = 1;
}
