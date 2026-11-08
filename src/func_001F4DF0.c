extern void func_003F9698(const char *, ...);
extern u8 D_00477A38[];
extern u8 D_00477890[];
extern u8 D_00477898[];

void func_001F4DF0(void *a0, u8 *s) {
    const char *fmt = (const char *)D_00477A38;
    s32 flag = *(s32 *)(s + 0x18);
    void *num = *(void **)(s + 0x1C);
    void *name = *(void **)(s + 0x14);
    const char *opt = flag ? (const char *)D_00477890 : (const char *)D_00477898;
    func_003F9698(fmt, name, num, opt);
}
