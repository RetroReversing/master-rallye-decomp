extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern const char D_0047B618[];
extern const char D_0047B630[];
extern const char D_0047B638[];

static inline void *init_e(void *p, s32 a) { func_001E2460(p, a); return p; }

void func_0028ED48(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    init_e(buf, arg2);
    func_001E2470(buf, D_0047B618, (u8 *)arg0 + 0x14);
    func_001E2470(buf, D_0047B630, (u8 *)arg0 + 0x10);
    func_001E28F8(buf, D_0047B638, (u8 *)arg0 + 0x18);
}
