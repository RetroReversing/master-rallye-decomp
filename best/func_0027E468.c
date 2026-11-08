extern void func_001D4040(void *, const char *);
extern const char D_0047AD30[];
extern void D_0047D638;

void *func_0027E468(void *arg0) {
    s32 sp[4];
    func_001D4040(sp, D_0047AD30);
    *(s32 *)((u8 *)arg0 + 4) = sp[0];
    *(s32 *)arg0 = -1;
    *(void **)((u8 *)arg0 + 8) = &D_0047D638;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return arg0;
}
