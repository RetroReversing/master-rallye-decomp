extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

extern void *func_002A1880(void *, s32, s32);
extern void func_001D1AD8(void *);
extern void func_001DF640(void *, void *, s32 *, s32 *);
extern void func_001D3478(void *, void *, s32, s32);
extern void D_002AD390(s32);

typedef void (*Fn2)(void *, s32);
typedef struct {
    u8 pad[0x8];
    s16 unk8;
    u8 pad2[2];
    Fn2 unkC;
} Vtbl2_0D48;
typedef struct {
    u8 pad[0x10];
    Vtbl2_0D48 *vt;
} Obj2_0D48;

void func_002A0D48(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    u8 sp[0x8C];
    Obj2_0D48 *obj = (Obj2_0D48 *)func_002A1880(sp + 0x80, arg2, arg3);

    func_001D1AD8(sp + 0x64);
    func_001DF640(sp, obj, (s32 *)(sp + 0x84), (s32 *)(sp + 0x88));
    if (obj != NULL) {
        Vtbl2_0D48 *vt = obj->vt;
        vt->unkC((u8 *)obj + vt->unk8, 3);
    }
    func_001D3478(arg0, arg1, *(s32 *)(sp + 0x84), *(s32 *)(sp + 0x88));
    D_002AD390(*(s32 *)(sp + 0x84));
}

extern void func_001E2460(void *, s32);
extern void func_001E28F8(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern const char D_0047BB58[];
extern const char D_0047BB60[];
extern const char D_0047B4A8[];

static inline void *init_a_0A78(void *p, s32 a) { func_001E2460(p, a); return p; }

void func_002A0A78(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    init_a_0A78(buf, arg2);
    func_001E28F8(buf, D_0047BB58, (u8 *)arg0 + 0xC);
    func_001E28F8(buf, D_0047BB60, (u8 *)arg0 + 0x10);
    func_001E2510(buf, D_0047B4A8, (u8 *)arg0 + 0x14);
}

extern void *D_002AD408(s32);
extern void *D_0044DD18;
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2C08(void *, const char *, f32);

void *func_002A09B8(void *arg0) {
    u8 sp[0x10];
    void *obj = D_002AD408(0x24);

    *(s32 *)((u8 *)obj + 0x8) = 0;
    *(void **)((u8 *)obj + 0x10) = D_0044DD18;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 0x4) = 0;
    *(s32 *)((u8 *)obj + 0x0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)obj + 0x1C) = 0;
    *(s32 *)((u8 *)obj + 0x18) = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;

    func_001E2460(sp, obj);
    func_001E2E38(sp, D_0047BB58, (u8 *)arg0 + 0xC);
    func_001E2E38(sp, D_0047BB60, (u8 *)arg0 + 0x10);
    func_001E2C08(sp, D_0047B4A8, *(f32 *)((u8 *)arg0 + 0x14));
    return obj;
}
