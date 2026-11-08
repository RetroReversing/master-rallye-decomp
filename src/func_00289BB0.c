extern void func_001D4040(void *, const char *);
extern const char D_0047B270[];
extern void D_0047D2F8;

void *func_00289BB0(void *arg0) {
    s32 k[4];
    func_001D4040(k, D_0047B270);
    *(s32 *)((u8 *)arg0 + 4) = k[0];
    *(s32 *)arg0 = -1;
    *(void **)((u8 *)arg0 + 8) = &D_0047D2F8;
    *(f32 *)((u8 *)arg0 + 0xC) = 0.3f;
    *(f32 *)((u8 *)arg0 + 0x10) = 70.0f;
    return arg0;
}
