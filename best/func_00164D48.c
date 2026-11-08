void func_001D4040(void *, const char *);
void func_00164150(void *);
void func_00165550(void *, s32);

extern char D_0044F590[];
extern char D_0044F5A8[];
extern void *D_00474090;

void *func_00164D48(void *arg0) {
    s32 sp[8];
    void *pC;
    void *p88;

    func_001D4040(sp, D_0044F590);
    pC = (u8 *)arg0 + 0xC;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(s32 *)((u8 *)arg0 + 4) = sp[0];
    *(void **)((u8 *)arg0 + 8) = &D_00474090;
    func_00165550((u8 *)arg0 + 0x10, sp[0]);
    *(s32 *)((u8 *)arg0 + 0x88) = 0;
    p88 = (u8 *)arg0 + 0x88;
    *(s32 *)((u8 *)p88 + 8) = 0;
    *(s32 *)((u8 *)p88 + 4) = 0;
    func_00164150((u8 *)arg0 + 0x94);
    *(s32 *)((u8 *)arg0 + 0xB4) = 0;
    func_001D4040(pC, D_0044F5A8);
    return arg0;
}
