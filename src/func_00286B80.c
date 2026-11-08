extern void func_001E2460(void *, s32);
extern void func_001E25B0(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern const char D_0047ADC0[];
extern const char D_0047B050[];

static inline void *init_e6(void *p, s32 a) { func_001E2460(p, a); return p; }

void func_00286B80(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    init_e6(buf, arg2);
    func_001E28F8(buf, D_0047B050, (u8 *)arg0 + 0x10);
    func_001E25B0(buf, D_0047ADC0, (u8 *)arg0 + 0xC);
}
