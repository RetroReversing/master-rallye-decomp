extern void func_00342D00(void *, s32, void *, void *);
extern u8 D_0042D600[0x30];

s32 func_0030D390(s32 arg0, s32 arg1, u8 *arg2) {
    if ((u32)arg0 >= 0x30u) return -2;
    if ((u32)arg1 < (u32)arg0) return -3;
    if ((u32)arg1 >= 0x30u) return -3;
    if ((s32)arg1 < (s32)arg0) return -1;
    u8 *p = D_0042D600 + arg0;
    s32 v;
    do {
        if (*p == 0) {
            *p = v;
            return arg0;
        }
        v = 3;
        ++arg0;
    } while (arg0 <= arg1);
    return -1;
}

extern void func_00342D00(void *, s32, void *, void *);

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
