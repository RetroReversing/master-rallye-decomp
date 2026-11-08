extern void func_00342D00(void *, s32, void *, void *);
extern u32 D_0042D5F4;
extern void func_0030C350(u32);
extern void func_0030C508(u32);
extern void func_0030C3C0(void);
extern s32 D_0042D5AC;
extern s32 D_0042D5C4;
extern u8 D_0042D5F8;
extern u8 D_0042D600[0x30];

void func_0032FF90(void *arg0, void *arg1) {
    char *p0 = (char *)arg0;
    char *p1 = (char *)arg1;
    char *b440 = p0 + 0x440;
    *(u32 *)(p0 + 0x430) = *(u32 *)p1;
    *(u32 *)(p0 + 0x434) = *(u32 *)(p1 + 4);
    *(f32 *)(p0 + 0x440) = *(f32 *)(p1 + 0x10);
    *(f32 *)(p0 + 0x444) = *(f32 *)(p1 + 0x14);
    *(f32 *)(p0 + 0x448) = *(f32 *)(p1 + 0x18);
    *(f32 *)(p0 + 0x44C) = *(f32 *)(p1 + 0x1C);
    *(f32 *)(p0 + 0x450) = *(f32 *)(p1 + 0x20);
    *(f32 *)(p0 + 0x454) = *(f32 *)(p1 + 0x24);
    *(f32 *)(p0 + 0x458) = *(f32 *)(p1 + 0x28);
    *(f32 *)(p0 + 0x45C) = *(f32 *)(p1 + 0x2C);
    *(f32 *)(p0 + 0x454) = 0.25f;
    *(f32 *)(p0 + 0x458) = 512.0f;
    func_00342D00(*(void **)(p0 + 0x30), *(s32 *)(p0 + 0x434), b440, p1 + 0x10);
}

s32 func_0030CC90(u32 arg0) {
    if (arg0 < 0x30u) {
        D_0042D5F4 = arg0;
        func_0030C350(0x10);
        func_0030C508(arg0);
        func_0030C3C0();
        return 0;
    }
    return -1;
}

void func_0030CB08(s32 arg0, s32 arg1) {
    if (arg0 != -1) {
        D_0042D5AC = 1;
        D_0042D5C4 = -1;
    }
    func_0030C350(9);
    func_0030C508(arg0);
    func_0030C508(arg1);
    func_0030C3C0();
    D_0042D5F8 = 1;
}

s32 func_0030D390(s32 arg0, s32 arg1, u8 *arg2) {
    if ((u32)arg0 >= 0x30u) return -2;
    if ((u32)arg1 < (u32)arg0) return -3;
    if ((u32)arg1 >= 0x30u) return -3;
    u8 *p = D_0042D600 + arg0;
    s32 v;
    do {
        if (*p == 0) {
            *arg2 = v;
            return arg0;
        }
        v = 3;
        ++arg0;
    } while (arg0 <= arg1);
    return -1;
}
