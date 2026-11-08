extern s32 func_00152688(void);
extern void func_00152720(void *arg0, void *arg1, void *arg2, s32 arg3);
extern s32 func_00152918(void *);

s32 func_00118C60(void) {
    s32 sp[4];
    sp[0] = -1;
    func_00152918(sp);
    return sp[0];
}

extern void func_001D4040(void *, const char *);
extern const char D_00446628[];
extern void *D_0044D800;

static inline void *init_b(void *p, const char *s) {
    func_001D4040(p, s);
    return p;
}

void *func_0011B708(void *arg0) {
    u8 buf[0x10];
    s32 *k = (s32 *)init_b(buf, D_00446628);
    f32 f1 = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x4) = k[0];
    *(s32 *)arg0 = -1;
    *(void **)((u8 *)arg0 + 0x8) = D_0044D800;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
    *(f32 *)((u8 *)arg0 + 0x54) = f1;
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

typedef struct {
    s32 unk0;
    s32 *unk4;
    s32 unk8;
} S_00118BE0;

void func_00118BE0(S_00118BE0 *arg0) {
    s32 *temp_3;
    s32 temp_7;
    s32 var_17;
    s32 sp[16];

    var_17 = 0;
    func_00152688();
    do {
        temp_3 = arg0->unk4;
        temp_7 = var_17 + 8;
        var_17 += 1;
        if (temp_3 != (s32 *)arg0->unk8) {
            if (temp_3 != NULL) {
                *temp_3 = temp_7;
            }
            arg0->unk4 = (s32 *)((u8 *)arg0->unk4 + 4);
        } else {
            func_00152720(arg0, temp_3, sp, temp_7);
        }
    } while (var_17 < 0xC);
}
