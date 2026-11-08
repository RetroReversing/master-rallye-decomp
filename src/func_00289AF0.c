extern void func_001D4040(void *, const char *);
extern const char D_0047B260[];
extern void D_0047D338;

void *func_00289AF0(void *arg0, s32 arg1) {
    s32 k[4];
    func_001D4040(k, D_0047B260);
    *(s32 *)((u8 *)arg0 + 4) = k[0];
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
    *(s32 *)arg0 = -1;
    *(void **)((u8 *)arg0 + 8) = &D_0047D338;
    return arg0;
}
