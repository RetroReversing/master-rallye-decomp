extern void *func_001E3820(s32, void *, void *);
extern s32 func_001E4280(void);

void func_0016D380(void *arg0) {
    s32 a;
    s32 v0;
    s32 s16;
    s32 ten;
    void *r;
    void *r2;
    a = *(s32 *)((char *)arg0 + 0x38);
    v0 = 0;
    if (a > 0) {
        if (a >= 4) {
            v0 = 10;
        } else {
            v0 = *(s32 *)((char *)arg0 + 0x34) * 3 + a;
        }
    }
    s16 = v0;
    ten = 10;
    if (s16 < 0) {
        s16 = 0;
    } else if (ten < s16) {
        s16 = ten;
    }
    r = func_001E3820(func_001E4280(), arg0, (char *)arg0 + 4);
    if (r != 0) {
        r2 = *(void **)((char *)r + 8);
        if (r2 != 0) {
            *(s32 *)((char *)r2 + 0x90) = s16;
        }
    }
}
