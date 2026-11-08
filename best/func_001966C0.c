extern void func_00196358(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, void *);
extern void func_001E3750(s32, void *);
extern void func_001E3EC0(s32, void *, s32);

void func_00196670(void *arg0) {
    char buf[16];
    s32 val;
    func_00196358();
    val = *(s32 *)((u8 *)arg0 + 0x10);
    func_001D2900(buf, val);
    func_001E3750(func_001E4280(), buf);
}

void func_001966C0(void *arg0, s32 arg1, s32 arg2) {
    char buf[16];
    s32 val;
    s32 tmp;
    void *p = (u8 *)arg0 + 0xC;
    func_00196358();
    val = *(s32 *)((u8 *)arg0 + 0x14);
    func_001D2900(p, val);
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)p);
    func_001E3EC0(tmp, buf, arg2);
}

void func_00196730(void *arg0) {
    char buf[16];
    s32 val;
    s32 tmp;
    void *p = (u8 *)arg0 + 0xC;
    func_00196358();
    val = *(s32 *)((u8 *)arg0 + 0x14);
    func_001D2900(p, val);
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)p);
    func_001E3650(tmp, (s32)buf);
}
