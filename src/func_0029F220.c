extern s32 func_001E4280(void);
extern void *func_001E3700(s32, void *);
extern s32 func_001D4010(void *);
extern s32 func_003FA760(s32, s32);
extern void func_0029FA10(void *, s32);

void func_0029F220(void *arg0) {
    s32 sp[4];
    void *p50;
    s32 t;
    s32 *p;
    s32 val;
    s32 v30;
    s32 cond;

    p50 = (u8 *)arg0 + 0x50;
    if (*(s32 *)p50 == 0)
        return;

    t = func_001E4280();
    p = func_001E3700(t, p50);
    sp[0] = *p;
    val = func_001D4010(sp);
    v30 = *(s32 *)((u8 *)arg0 + 0x30);
    cond = 0;
    if (v30 != 0 && val != 0) {
        cond = func_003FA760(val, v30) == 0;
    }
    if (cond == 0) {
        func_0029FA10(arg0, func_001D4010(sp));
    }
}
