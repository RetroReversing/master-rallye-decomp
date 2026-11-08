void func_0014E028(void *, s32);
void **func_0017E620(void);
s32 func_001930D8(s32, s32);
s32 func_00193B60(void);
s32 func_001D4010(void *);
void func_001D4040(void *, const char *);
void func_001D4810(void *, s32);
void func_0021E4F0(s32);
void func_0021E740(s32, s32);
void func_0021E748(s32, void *);
void func_003FA310(void *, const char *, s32);

extern const char D_0044C538[];
extern const char D_0044C548[];

void func_0014E250(void *arg0, s32 arg1) {
    s32 sp[40];
    s32 sp10[4];
    void **vtable;
    void *v1;
    s32 (*fn)(void *, s32, s32);
    s32 res;
    void *t;
    
    t = (void *)func_00193B60();
    res = func_001930D8((s32)t, *(s32 *)((u8 *)arg0 + 0xC));
    func_003FA310(sp, D_0044C538, res);
    func_001D4040((u8 *)arg0 + 0x20, sp);
    
    if (*(s32 *)((u8 *)arg0 + 0x24) == 0) {
        func_0021E4F0(arg1);
        return;
    }
    
    func_001D4810((u8 *)arg0 + 0x18, func_001D4010((u8 *)arg0 + 0x24));
    vtable = func_0017E620();
    v1 = vtable[0];
    fn = *(void **)((u8 *)v1 + 0x24);
    func_001D4810((u8 *)arg0 + 0x1C, fn(vtable, *(s32 *)((u8 *)arg0 + 0x28), (s32)vtable + *(s16 *)((u8 *)v1 + 0x20)));
    
    *(s32 *)((u8 *)arg0 + 0x14) = arg1;
    func_0021E740(arg1, 2);
    func_001D4040(sp10, D_0044C548);
    func_0021E748(*(s32 *)((u8 *)arg0 + 0x14), sp10);
    *(s32 *)((u8 *)arg0 + 0x10) = 1;
    func_0014E028(arg0, 1);
}
