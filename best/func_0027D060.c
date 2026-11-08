extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern const char D_00479FB8[];
extern void D_0047A088;
extern void *func_001C6750(void *);
extern void func_001C6710(void *, void *, s32);

void *func_0027DD60(void) {
    s32 sp[4];
    void *obj = D_002AD408(0xC);
    func_001D4040(sp, D_00479FB8);
    *(s32 *)obj = sp[0];
    *(void **)((u8 *)obj + 4) = &D_0047A088;
    return obj;
}

f32 func_0027D708(void *arg0) {
    u8 *p = func_001C6750(*(void **)arg0);
    return (f32)p[0] / *(f32 *)((u8 *)arg0 + 0x10);
}

void func_0027D678(void *arg0, s32 a1, s32 a2, s32 a3) {
    s32 sp[4];
    sp[0] = a3;
    func_001C6710(*(void **)arg0, sp, a3);
}

void func_0027D060(void *arg0) {
    f32 v[3];
    u8 *p = (u8 *)arg0 + 0x18C;
    v[0] = 0.0f;
    v[2] = 0.0f;
    *(f32 *)p = v[0];
    v[1] = -*(f32 *)((u8 *)arg0 + 0x1C) * *(f32 *)((u8 *)arg0 + 0x20);
    *(f32 *)(p + 4) = v[1];
    *(f32 *)(p + 8) = v[2];
}
