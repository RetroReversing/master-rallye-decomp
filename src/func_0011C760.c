extern void func_001D4040(void *, const char *);
extern const char D_00446628[];
extern void *D_0044D800;

static inline void *init_b(void *p, const char *s) { func_001D4040(p, s); return p; }

void *func_0011B708(void *arg0) {
    s32 buf[4];
    s32 *k = (s32 *)init_b(buf, D_00446628);
    f32 f1 = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x4) = *k;
    *(s32 *)arg0 = -1;
    *(void **)((u8 *)arg0 + 0x8) = D_0044D800;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
    *(f32 *)((u8 *)arg0 + 0x54) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 1;
    *(s32 *)((u8 *)arg0 + 0x24) = 1;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    *(s32 *)((u8 *)arg0 + 0x5C) = 0;
    *(s32 *)((u8 *)arg0 + 0x60) = 0;
    return arg0;
}

extern void **func_0017E620(void);
extern void func_001D2CD8(void *, void *);

void func_0011C6A8(void *arg0, s32 arg1, s32 arg2) {
    void **vtable = func_0017E620();
    void *obj = *vtable;
    void *vt = *(void **)obj;
    void *fn = *(void **)((u8 *)vt + 0x2C);
    void *res = ((void *(*)(void *, s32, s32, void *))fn)((u8 *)vt + *(s16 *)((u8 *)vt + 0x28), arg1, arg2, fn);
    func_001D2CD8((u8 *)arg0 + 0x34, res);
    *(s32 *)((u8 *)arg0 + 0x30) = 1;
}

extern void func_001D2458(void *);
extern void func_001D2CD8(void *, void *);
extern void D_002AD390(void *);

void func_0011C718(void *arg0, s32 arg1) {
    s32 buf[8];
    func_001D2458(buf);
    func_001D2CD8((u8 *)arg0 + 0x34, (void *)buf[0]);
    D_002AD390(buf[0]);
    *(s32 *)((u8 *)arg0 + 0x38) = 1;
    *(s32 *)((u8 *)arg0 + 0x30) = 1;
}

void func_0011C760(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x40) = arg2;
    *(s32 *)((u8 *)arg0 + 0x38) = 1;
}
