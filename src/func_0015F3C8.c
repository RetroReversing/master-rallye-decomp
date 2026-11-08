extern char D_0044EBA8[];
s32 func_001D4010(void *);
s32 func_002AD350(f32);
void func_003F9698(const char *, s32, s32);

void func_0015F3C8(void *arg0, void *arg1) {
    char *fmt = D_0044EBA8;
    void *p17 = *(void **)((u8 *)arg1 + 8);
    s32 t18 = func_001D4010((u8 *)arg1 + 0x5C);
    s32 t2 = func_002AD350(*(f32 *)((u8 *)p17 + 0xC));
    func_003F9698(fmt, t18, t2);
}
